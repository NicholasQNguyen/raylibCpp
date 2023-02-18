#include <iostream>
#include "raylib.h"
#include "definitions.h"
#include "character.h"


namespace library
{
    void update(definitions::turn currentTurn, character::Player player)
    {
        if (currentTurn == definitions::player)
        {
            definitions::actions playerAction = player.getAction();
            if (playerAction == definitions::attack)
            {
                std::cout << "Player attack\n";
            }
        }
        else
        {
            std::cout << "WHIP\n";
        }
    }

    void draw()
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("This will be an RPG", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    int main()
    {
    // Initialization
    InitWindow(definitions::SCREEN_WIDTH,
               definitions::SCREEN_HEIGHT,
               "raylib [core] example - basic window");
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    definitions::turn currentTurn = definitions::player;
    character::Player player = character::Player("Sam", 50);
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        update(currentTurn, player);
        draw();
    }
    // De-Initialization
    CloseWindow();        // Close window and OpenGL context
    return 0;
    }
}
