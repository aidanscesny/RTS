#include <stdio.h>
#include <raylib.h>

#include "include/grid_utils.h"

int main(void){
	const int screenWidth = 800;
	const int screenHeight = 450;
	
	struct grid_space grid[7][7];

	//initialize gridspace
	for(int i = 0; i < 7; ++i){
		for(int j = 0; j < 7; j++){
			grid[i][j] = default_hex;

			//cannot traverse off of the map 
			if(i == 0){
			} else {
			}
			if(i == 6){
			} else {
			}

		}
	}

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
				    //
	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
	BeginDrawing();

	    ClearBackground(RAYWHITE);

	    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

	EndDrawing();
	}

	CloseWindow();        // Close window and OpenGL context
	return 0;
}
