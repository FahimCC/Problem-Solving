#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
    int gun;
    gun = (b.length*b.width*b.height);
	return gun;
}

int is_lower_than_max_height(box b) {
	if(MAX_HEIGHT > b.height)
        return 1;
    else
        return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes;

	boxes =(box*)malloc(sizeof(box));
	///*boxes = malloc(n * sizeof(box)); run kore nai kn ???

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
