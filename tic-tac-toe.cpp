#include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

char currentPlayer = 'X';

void displayBoard() {
    cout << "\n";
    for(int i = 0; i < 3; i++) {
        cout << " ";
        for(int j = 0; j < 3; j++) {
            cout << board[i][j];
            if(j < 2) cout << " | ";
        }
        cout << "\n";
        if(i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool checkWin() {
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == currentPlayer &&
           board[i][1] == currentPlayer &&
           board[i][2] == currentPlayer)
            return true;

        if(board[0][i] == currentPlayer &&
           board[1][i] == currentPlayer &&
           board[2][i] == currentPlayer)
            return true;
    }

    if(board[0][0] == currentPlayer &&
       board[1][1] == currentPlayer &&
       board[2][2] == currentPlayer)
        return true;

    if(board[0][2] == currentPlayer &&
       board[1][1] == currentPlayer &&
       board[2][0] == currentPlayer)
        return true;

    return false;
}

bool checkDraw() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
        }
    }
    return true;
}

void makeMove() {
    int choice;
    cout << "Player " << currentPlayer << ", enter position (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if(board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
    } else {
        cout << "Position already taken! Try again.\n";
        makeMove();
    }
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    char playAgain;

    do {
        board[0][0]='1'; board[0][1]='2'; board[0][2]='3';
        board[1][0]='4'; board[1][1]='5'; board[1][2]='6';
        board[2][0]='7'; board[2][1]='8'; board[2][2]='9';

        currentPlayer = 'X';

        while(true) {
            displayBoard();
            makeMove();

            if(checkWin()) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }

            if(checkDraw()) {
                displayBoard();
                cout << "Game Draw!\n";
                break;
            }

            switchPlayer();
        }

        cout << "Play Again? (Y/N): ";
        cin >> playAgain;

    } while(playAgain == 'Y' || playAgain == 'y');

    return 0;
}