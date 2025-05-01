#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#define CANVAS_WIDTH 10
#define CANVAS_HEIGHT 20


typedef enum
{
	EMPTY = -1,
	I,
	J,
	L,
	O,
	S,
	T,
	Z
}ShapeId;

typedef enum
{
	RED = 41,
	GREEN,
	YELLOW,
	BLUE,
	PURPLE,
	CYAN,
	WHITE,
	BLACK = 0,
}Color;

typedef struct
{
	ShapeId shape;
	Color color;
	int size;
	char rotates[4][4][4];
}Shape;

typedef struct
{
	Color color;
	ShapeId shape;
	bool current;
}block;

typedef struct {
	int x;
	int y;
	int score;
	int rotate;
	int fallTime;
	ShapeId queue[4];
}State;


Shape shape[7] = {
	{
		.shape = I,
		.color = CYAN,
		.size = 4,
		.rotates =
		{
			{
				{0,0,0,0},
				{1,1,1,1},
				{0,0,0,0},
				{0,0,0,0},
			},
			{
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
			},
			{
				{0,0,0,0},
				{0,0,0,0},
				{1,1,1,1},
				{0,0,0,0},
			},
			{
				{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0},
			}
		}
	},
	{
		.shape = J,
		.color = BLUE,
		.size = 3,
		.rotates =
		{
			{
				{0,0,0},
				{1,1,1},
				{0,0,0},
			},
			{
				{0,0,1},
				{0,0,1},
				{0,0,1},
			},
			{
				{0,0,0},
				{0,0,0},
				{1,1,1},
			},
			{
				{0,1,0},
				{0,1,0},
				{0,1,0},
			}
		}
	},
	{
		.shape = L,
		.color = YELLOW,
		.size = 3,
	},
	{
		.shape = O,
		.color = WHITE,
		.size = 2,
		.rotates = {
			{
				{1,1},
				{1,1}
			},
			{
				{1,1},
				{1,1}
			},
			{
				{1,1},
				{1,1}
			},
			{
				{1,1},
				{1,1}
			}
		}
	},
	{
		.shape = S,
		.color = GREEN,
		.size = 3,
	},
	{
		.shape = T,
		.color = PURPLE,
		.size = 3,
		.rotates =
		{
			{
				{0,1,0},
				{1,1,1},
				{0,0,0},
			},
			{
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
			},
			{
				{0,0,0,0},
				{0,0,0,0},
				{1,1,1,1},
				{0,0,0,0},
			},
			{
				{0,1,0},
				{1,1,0},
				{0,1,0},
			}
		}
	},
	{
		.shape = Z,
		.color = RED,
		.size = 3,
	},
};

void setblock(block* block, color color, shapeId shape, bool current) {
	block->color = black;
	block->shape = shape;
	block->current = current;
}

void resetblock(block* block) {
	block->color = BLACK;
	block->shape = EMPTY;
	block->current = false;
}

int main() {

	return 0;
}
