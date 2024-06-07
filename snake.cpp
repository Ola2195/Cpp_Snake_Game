#include "snake.hpp"

void Snake::Draw(void)
{
    for (int i = 0; i < (int)body.size(); i++)
    {
        int x = body[i].x;
        int y = body[i].y;
        Rectangle segment = {(float)x * cellSize, (float)y * cellSize, (float)cellSize, (float)cellSize};
        DrawRectangleRounded(segment, 0.5, 6, darkGreen);
    }
}

void Snake::Update(void)
{
    body.push_front(Vector2Add(body[0], direction));
    if (addSegment)
    {
        addSegment = false;
    }
    else
    {
        body.pop_back();
    }
}

void Snake::ChangeDirection(KeyboardKey key)
{
    if (key == KEY_UP && direction.y != 1)
    {
        direction = {0, -1};
    }
    else if (key == KEY_DOWN && direction.y != -1)
    {
        direction = {0, 1};
    }
    else if (key == KEY_LEFT && direction.x != 1)
    {
        direction = {-1, 0};
    }
    else if (key == KEY_RIGHT && direction.x != -1)
    {
        direction = {1, 0};
    }
}

void Snake::Reset(void)
{
    body = {Vector2{(int)initialPosition, (int)initialPosition},
            Vector2{(int)initialPosition-1, (int)initialPosition},
            Vector2{(int)initialPosition-2, (int)initialPosition}};
    direction = {1, 0};
    addSegment = false;
}