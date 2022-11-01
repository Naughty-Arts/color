#include <stdio.h>

#include "color.h"

int main()
{
	printf("------------------- Color --------------------- \n");

	printf("Red: %s\n", color_string(red));
	printf("Green: %s\n", color_string(green));
	printf("Blue: %s\n", color_string(blue));

	return 0;
}