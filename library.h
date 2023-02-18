#include <iostream>
#include "raylib.h"
#include "definitions.h"
#include "character.h"


namespace library
{
    int main()
    {
    // Initialization
    InitWindow(definitions::SCREEN_WIDTH,
               definitions::SCREEN_HEIGHT,
               "raylib [core] example - basic window");
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    definitions::turn currentTurn;
    currentTurn = definitions::player;
    character::Character player = character::Character("Sam", 50);
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        if (currentTurn == definitions::player)
        {
            std::cout << "DAB\n";
        }
        else
        {
            std::cout << "WHIP\n";
        }
        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    // De-Initialization
    CloseWindow();        // Close window and OpenGL context
    return 0;
    }
}
