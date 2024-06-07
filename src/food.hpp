#pragma once

#include "utilities.hpp"

class Food
{
public:
    /* The current position of the food. */
    Vector2 position;

    /*
     * @brief   Construct a new Food object and initialize its position.
     * @param   snakeBody   The current body of the snake.
     */
    Food(deque<Vector2> snakeBody);

    /*
     * @brief   Draw the food on the screen.
     */
    void Draw(void);

    /*
     * @brief   Generate a random position for the food that does not overlap with the snake's body.
     * @param   snakeBody    The current body of the snake.
     * @return  The generated random position.
     */
    Vector2 GenerateRandomPos(deque<Vector2> snakeBody);
};
