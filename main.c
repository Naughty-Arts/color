#include <stdio.h>

#include "color.h"

int main()
{
	printf("------------------- Color --------------------- \n");

	printf("Red: %s\n", color_string(red));
	printf("Green: %s\n", color_string(green));
	printf("Blue: %s\n", color_string(blue));

	printf("%s\n", color_terminal(red, "red"));
	printf("%s\n", color_terminal(green, "green"));
	printf("%s\n", color_terminal(blue, "blue"));

	return 0;
}