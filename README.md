# Snake Game in C++ with Raylib

This is a simple Snake game implemented in C++ using the Raylib library, following the tutorial [C++ Snake game using raylib - Beginner Tutorial 🐍 (OOP)](https://youtu.be/LGqsnM_WEK4?si=MyETqGzHuvCYxsXE). The game follows a classic Snake gameplay where the player controls a snake that grows longer as it eats food, with the game ending when the snake collides with itself or the game boundaries.

## Features

- **Snake Movement**: Control the snake's movement using arrow keys.
- **Food Generation**: Food is randomly generated on the game board for the snake to eat.
- **Scoring System**: Keep track of the score as the snake eats food.
- **Game Over State**: The game ends when the snake collides with itself or the game boundaries, and the player can restart the game.

## Implementation Details

The project uses the [Raylib C++ Starter Template](https://github.com/educ8s/Raylib-CPP-Starter-Template-for-VSCODE-V2) for Visual Studio Code on Windows.
It works with raylib version 4.5. Tested on both Windows 10 and Windows 11.

The project is organized into the following files:

- **main.cpp**: Contains the main entry point of the program and game loop.
- **utilities.hpp**: Defines utility functions and global variables used throughout the game, including event handling and collision detection.
- **snake.hpp** and **snake.cpp**: Define the Snake class responsible for handling the snake's behavior and drawing.
- **food.hpp** and **food.cpp**: Define the Food class responsible for handling food generation and drawing.
- **game.hpp** and **game.cpp**: Define the Game class responsible for managing game logic, including collision detection and game over state.

## How to Build and Run

To build and run the game:

1. Clone the repository to your local machine.
2. Open the project using Visual Studio Code
3. Build the project using a C++ compiler with support for C++11 or later.
4. Run the compiled executable to start the game.

## Dependencies

This project uses the [Raylib](https://www.raylib.com/) library for graphics and window management.
