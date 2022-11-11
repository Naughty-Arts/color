#include <stdio.h>

#include "color.h"

int main()
{
	printf("------------------- Color --------------------- \n");

	color_init();

	printf("This is imperial red: %s\n", color_term(imperial_red, "imperial red"));
	printf("This is scarlet: %s\n", color_term(scarlet, "scarlet"));

	return 0;
}