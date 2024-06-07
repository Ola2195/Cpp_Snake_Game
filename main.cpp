#include <iostream>

#include "utilities.hpp"
#include "game.hpp"

using namespace std;

int main()
{
    cout << "Ladowanie gry..." << endl;
    InitWindow(cellCount * cellSize, cellCount * cellSize + bottomOffset, "Snake");
    SetTargetFPS(MAN_FPS);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        if (eventTriggered(0.2))    // Slowing down the refresh rate of the screen (reading input signals is supposed to be faster than the operation of the game)
        {
            game.Update();
        }

        if (IsKeyPressed(KEY_LEFT) || IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_UP))
        {
            game.snake.ChangeDirection((KeyboardKey)GetKeyPressed());
            game.running = true;
        }

        ClearBackground(green);
        DrawRectangle(0, cellCount * cellSize, cellCount * cellSize, bottomOffset, white);
        DrawText(TextFormat("Wynik: %i", game.score), 5, cellCount * cellSize + 5, 20, darkGreen);
        if(!game.running) {
            DrawText(TextFormat("Nacisnij dowolna strzalke, zeby kontynuowac!"), cellCount * cellSize-500, cellCount * cellSize + 5, 20, darkGreen);
        }

        game.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}