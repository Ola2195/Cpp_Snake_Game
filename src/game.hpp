#pragma once

#include "utilities.hpp"
#include "snake.hpp"
#include "food.hpp"


class Game
{
public:
    /* The snake object. */
    Snake snake = Snake();

    /* The food object. */
    Food food = Food(snake.body);

    /* Flag indicating whether the game is currently running. */
    bool running = true;

    /* The current score of the game. */
    int score = 0;

    /*
     * @brief   Draw the game elements (snake and food) on the screen.
     */
    void Draw(void);

    /*
     * @brief   Update the game state.
     */
    void Update(void);

private:
    /*
     * @brief   Check if the snake has collided with the food.
     */
    void CheckCollisionWithFood(void);

    /*
     * @brief   Check if the snake has collided with the edges of the game area.
     */
    void CheckCollisionWithEdges(void);

    /*
     * @brief   Check if the snake has collided with its own tail.
     */
    void CheckCollisionWithTail(void);

    /*
     * @brief   Handle the game over state.
     */
    void GameOver(void);
};
