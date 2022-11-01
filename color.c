#include "color.h"

#include <stdio.h>
#include <stdlib.h>

Color black = { 0, 0, 0 };
Color white = { 1, 1, 1 };
Color gray = { 0.5, 0.5, 0.5 };

Color red = { 1, 0, 0 };
Color green = { 0, 1, 0 };
Color blue = { 0, 0, 1 };

Color cyan = { 0, 1, 1 };
Color yellow = { 1, 1, 0 };
Color magenta = { 1, 0, 1 };

Color color_add(Color c1, Color c2)
{
	Color r = { c1.r + c2.r, c1.g + c2.g, c1.b + c2.b };
	return r;
}

Color color_subtract(Color c1, Color c2)
{
	Color r = { c1.r - c2.r, c1.g - c2.g, c1.b - c2.b };
	return r;
}

Color color_times(Color c, float a)
{
	Color r = { c.r * a, c.g * a, c.b * a };
	return r;
}

Color color_hadamard(Color c1, Color c2)
{
	Color r = { c1.r * c2.r, c1.g * c2.g, c1.b * c2.b };
	return r;
}

char* color_string(Color color)
{
	char* result = malloc(sizeof(char) * 128);
	sprintf(result, "%.5f %.5f, %.5f", color.r, color.g, color.b);
	return result;
}