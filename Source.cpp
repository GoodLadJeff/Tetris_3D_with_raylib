#include "raylib.h"
#include "Level.h"

int main(void)
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    Level level{};

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        level.DisplayLevel();

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}