#include <stdio.h>

struct grid_space {	
	//neighbors list
	struct grid_space* neighbors[6];
	int x;
	int y;
};

struct grid_space default_hex = {
	.x = 0,
	.y = 0,
	.neighbors = {NULL, NULL, NULL, NULL, NULL, NULL},
};

enum cardinals {
	NORTH_EAST = 0,
	EAST = 1,
	SOUTH_EAST = 2,
	SOUTH_WEST = 3,
	WEST = 4, 
	NORTH_WEST = 5,
};

