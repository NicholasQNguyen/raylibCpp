#include <iostream>
#include "raylib.h"
#include "definitions.h"
#include "character.h"


namespace library
{
    void update(character::turn* currentTurn, character::Player player)
    {
        if (*currentTurn == character::player)
        {
            character::actions playerAction = player.getAction();
            if (playerAction == character::attack)
            {
                *currentTurn = character::enemy;
                std::cout << "Player attack\n";
            }
        }
        // Enemy turn
        else
        {
            character::actions playerAction = player.getAction();
            if (playerAction == character::attack)
            {
                *currentTurn = character::player;
                std::cout << "Enemy attack\n";
            }
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
    character::turn currentTurn = character::player;
    character::Player player = character::Player("Sam", 50);
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        update(&currentTurn, player);
        draw();
    }
    // De-Initialization
    CloseWindow();        // Close window and OpenGL context
    return 0;
    }
}
