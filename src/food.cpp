#include "food.hpp"

Food::Food(deque<Vector2> snakeBody)
{
    position = GenerateRandomPos(snakeBody);
}

void Food::Draw(void)
{
    Rectangle segment = {position.x * cellSize, position.y * cellSize, (float)cellSize, (float)cellSize};
    DrawRectangleRounded(segment, 0.5, 6, red);
}

Vector2 Food::GenerateRandomPos(deque<Vector2> snakeBody)
{
    float x, y;
    Vector2 position;
    do
    {
        x = GetRandomValue(0, cellCount - 1);
        y = GetRandomValue(0, cellCount - 1);
        position = {x, y};
    } while (ElementInDeque(position, snakeBody));
    return position;
}
