#include "shape.h"

Block get_Block(Shape* shape, unsigned int x, unsigned int y) {
	unsigned int index;
	/* 보는 관점에서 가로 세로를 검사 */
	if (x >= get_Width(shape) || y >= get_Height(shape)) {
		fprintf(stderr, "get Block index out!\n");
		/* 예외 처리 */
		return nexist;
	}
	/* 보는 관점에 따라 인덱스 계산 */
	switch (shape->direction) {
	case north:
		index = (shape->width - 1 - x) + shape->width * (shape->height - y - 1);
		break;
	case east:
		index = (shape->width - 1 - y) + x * shape->width;
		break;
	case south:
		index = x + shape->width * y;
		break;
	case west:
		index = y + shape->width * (shape->height - x - 1);
		break;
	}
	return shape->map[index];
}
unsigned int get_Height(Shape* shape) {
	unsigned ret = (shape->direction == north || shape->direction == south) ? shape->height : shape->width;
	return ret;
}
unsigned int get_Width(Shape* shape) {
	unsigned ret = (shape->direction == north || shape->direction == south) ? shape->width : shape->height;
	return ret;
}
void rotate_Clock(Shape* shape) {
	shape->direction = (shape->direction + 1) % 4;
}
void rotate_CounterClock(Shape* shape) {
	shape->direction = (shape->direction + 3) % 4;
}
Shape * make_Shape(int row, int size) {
	Shape* shape;
	Block* map;
	int tmp_index;
	int tmp_x, tmp_y;
	int width, height,rand_size;
	int i;
	height = width = row; //정사각형을 가정
	rand_size = (rand() % 5) - 2;
	rand_size += size;
	rand_size = rand_size > 0 ? rand_size: size;

	shape = (Shape*)malloc(sizeof(Shape));
	map = (Block*)malloc(sizeof(Block)*(width*height));

	shape->width = width;
	shape->height = height;
	shape->map = map;
	shape->direction = south;

	/* 랜덤으로 모양 생성 */
	tmp_index = rand() % (width * height);
	map[tmp_index] = exist;

	for (i = 1; i < size;) {
		tmp_index = rand() % (width * height);
		tmp_x = tmp_index % width;
		tmp_y = tmp_index / width;
		
		if (map[tmp_index] == exist)
			continue;

		if (tmp_x >= 1 && map[tmp_index - 1] == exist) {
			map[tmp_index] = exist;
			i++;
			continue;
		}
		else if (tmp_x < width - 1 && map[tmp_index + 1] == exist) {
			map[tmp_index] = exist;
			i++;
			continue;
		}
		else if (tmp_y < height - 1 && map[tmp_index + width] == exist) {
			map[tmp_index] = exist;
			i++;
			continue;
		}
		else if (tmp_y >= 1 && map[tmp_index - width] == exist) {
			map[tmp_index] = exist;
			i++;
			continue;
		}
	}
	return shape;
}

void delete_Shape(Shape* shape) {
	free(shape->map);
	free(shape);
}
/* for demo */
void print_Shape(Shape* shape) {
	int width = get_Width(shape);
	int height = get_Height(shape);
	int x, y;
	for (x = 0; x < width; x++) {
		for (y = 0; y < height; y++) {
			Block tmp = get_Block(shape, x, y);
			if (tmp == exist)
				printf("■");
			else
				printf("□");
		}
		printf("\n");
	}
}

/* for demo 
int main() {
	srand((time_t)time(NULL));
	for (int i = 0; i < 100; i++) {
		Shape* test = make_Shape(4,4);
		print_Shape(test);
		delete_Shape(test);
		getchar();
	}
	getchar();
}
*/

/* for demo 
int main() {
	srand((time_t)time(NULL));
	Shape* test = make_Shape(4,4);
	print_Shape(test);
	getchar();
	rotate_Clock(test);
	print_Shape(test);
	getchar();
	rotate_Clock(test);
	print_Shape(test);
	getchar();
	rotate_Clock(test);
	print_Shape(test);
	getchar();
}
*/