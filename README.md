# CODSOFT

# Task 1 - Number Guessing Game

## 📌 Project Overview
The Number Guessing Game is a simple console-based C++ application where the computer generates a random number, and the user attempts to guess it. The program provides feedback after each guess until the correct number is found.

## 🚀 Features
- Random number generation
- User-friendly console interface
- Hint system (Too High / Too Low)
- Unlimited attempts until the correct guess
- Displays success message when the number is guessed correctly

## 🛠️ Technologies Used
- C++
- Visual Studio Code
- GitHub

## ⚙️ How It Works ?
1. The program generates a random number.
2. The user enters a guess.
3. The program compares the guess with the secret number.
4. If the guess is too high, the program displays "Too High".
5. If the guess is too low, the program displays "Too Low".
6. The game continues until the user guesses the correct number.
7. A congratulatory message is displayed when the user wins.

## 📂 File Structure
```
guess_game.cpp
```

## ▶️ How to Run ?

### Compile the Program
```bash
g++ guess_game.cpp -o guess_game
```

### Run the Program
```bash
./guess_game
```

## 💻 Sample Output

### Example 1
```
Welcome to Number Guessing Game!

Guess a number between 1 and 100: 50

Too Low! Try Again.

Guess a number between 1 and 100: 75

Too High! Try Again.

Guess a number between 1 and 100: 68

Congratulations! You guessed the correct number.
```

### Example 2
```
Welcome to Number Guessing Game!

Guess a number between 1 and 100: 25

Too Low! Try Again.

Guess a number between 1 and 100: 40

Too Low! Try Again.

Guess a number between 1 and 100: 55

Congratulations! You guessed the correct number.
```

## 📚 Concepts Used
- Variables and Data Types
- Loops (while/do-while)
- Conditional Statements (if-else)
- Random Number Generation
- User Input and Output
- Problem Solving

## 🎯 Learning Outcomes
- Understanding random number generation
- Working with loops and conditions
- Improving logical thinking
- Building interactive console applications
- Handling user input effectively



# Task 2 - Simple Calculator

## 📌 Project Overview
The Simple Calculator is a console-based C++ application that performs basic arithmetic operations. Users can enter two numbers and choose an operator to get the desired result.

## 🚀 Features
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- User-friendly interface
- Fast and accurate calculations

## 🛠️ Technologies Used
- C++
- Visual Studio Code
- GitHub

## ⚙️ How It Works ?
1. The program asks the user to enter the first number.
2. The user selects an arithmetic operator (+, -, *, /).
3. The program asks for the second number.
4. Using a switch-case statement, the selected operation is performed.
5. The result is displayed on the screen.

## 📂 File Structure
```
calculator.cpp
```

## ▶️ How to Run ?

### Compile the Program
```bash
g++ calculator.cpp -o calculator
```

### Run the Program
```bash
./calculator
```

## 💻 Sample Outputs

### Addition
```
----- Simple Calculator -----

Enter first number: 15
Enter an operator (+, -, *, /): +
Enter second number: 10

Result = 25
```

### Subtraction
```
----- Simple Calculator -----

Enter first number: 20
Enter an operator (+, -, *, /): -
Enter second number: 8

Result = 12
```

### Multiplication
```
----- Simple Calculator -----

Enter first number: 12
Enter an operator (+, -, *, /): *
Enter second number: 5

Result = 60
```

### Division
```
----- Simple Calculator -----

Enter first number: 50
Enter an operator (+, -, *, /): /
Enter second number: 10

Result = 5
```

## 📚 Concepts Used
- Variables and Data Types
- User Input/Output
- Arithmetic Operators
- Switch-Case Statements
- Basic Problem Solving

## 🎯 Learning Outcomes
- Improved understanding of C++ fundamentals
- Learned how to use switch-case statements
- Practiced user interaction through console applications
- Gained experience with arithmetic operations in C++



# Task 3 - Tic-Tac-Toe Game

## 📌 Project Overview
The Tic-Tac-Toe Game is a console-based C++ application that allows two players to play the classic Tic-Tac-Toe game. Players take turns marking X and O on a 3×3 grid, and the game determines the winner or a draw automatically.

## 🚀 Features
- Two-player gameplay
- Interactive 3×3 game board
- Valid move checking
- Winner detection
- Draw detection
- User-friendly console interface

## 🛠️ Technologies Used
- C++
- Visual Studio Code
- GitHub

## ⚙️ How It Works ?
1. The game displays a 3×3 board.
2. Player 1 uses **X** and Player 2 uses **O**.
3. Players take turns entering a position on the board.
4. The program validates the move.
5. After each move, the board is updated.
6. The game checks for a winner.
7. If all cells are filled and no winner exists, the game ends in a draw.

## 📂 File Structure
```text
tic_tac_toe.cpp
```

## ▶️ How to Run ?

### Compile the Program
```bash
g++ tic_tac_toe.cpp -o tic_tac_toe
```

### Run the Program
```bash
./tic_tac_toe
```

## 💻 Sample Output

### Game Start
```text
Player 1 (X)  -  Player 2 (O)

     |     |
  1  |  2  |  3
_____|_____|_____
     |     |
  4  |  5  |  6
_____|_____|_____
     |     |
  7  |  8  |  9
     |     |
```

### Example Gameplay
```text
Player 1, enter a number: 1
Player 2, enter a number: 5
Player 1, enter a number: 2
Player 2, enter a number: 8
Player 1, enter a number: 3

Player 1 Wins!
```

### Draw Example
```text
Player 1, enter a number: 1
Player 2, enter a number: 2
Player 1, enter a number: 3
Player 2, enter a number: 5
Player 1, enter a number: 4
Player 2, enter a number: 6
Player 1, enter a number: 8
Player 2, enter a number: 7
Player 1, enter a number: 9

Game Draw!
```

## 📚 Concepts Used
- Arrays
- Functions
- Loops
- Conditional Statements
- Switch Case
- User Input/Output
- Game Logic Implementation

## 🎯 Learning Outcomes
- Understanding game development fundamentals
- Working with arrays and functions
- Implementing turn-based logic
- Handling user input validation
- Developing problem-solving skills

# 👩‍💻 Author
Ayushi Kumari

# 📜 Internship
CodSoft C++ Programming Internship
