#pragma once

#include "utilities.hpp"

class Snake
{
public:
    /* Initial position for Snake. */
    const int initialPosition = cellCount/2;

    /* The body segments of the snake. */
    deque<Vector2> body = {Vector2{(int)initialPosition, (int)initialPosition},
                            Vector2{(int)initialPosition-1, (int)initialPosition},
                            Vector2{(int)initialPosition-2, (int)initialPosition}};

    /* The current direction of the snake's movement. */
    Vector2 direction = {1, 0};

    /* Flag indicating whether to add a new segment to the snake. */
    bool addSegment = false;

    /*
     * @brief   Draw the snake on the screen.
     */
    void Draw(void);

    /*
     * @brief   Update the position and state of the snake.
     */
    void Update(void);

    /*
     * @brief   Change the direction of the snake based on keyboard input.
     * @param   key     The keyboard key pressed.
     */
    void ChangeDirection(KeyboardKey key);

    /*
     * @brief   Reset the snake to its initial state.
     */
    void Reset(void);
};