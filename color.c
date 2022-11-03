#include "color.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Color black = { 0, 0, 0, 1 };
Color white = { 1, 1, 1, 1 };
Color gray = { 0.5, 0.5, 0.5, 1 };

Color red = { 1, 0, 0, 1 };
Color green = { 0, 1, 0, 1 };
Color blue = { 0, 0, 1, 1 };

Color cyan = { 0, 1, 1, 1 };
Color yellow = { 1, 1, 0, 1 };
Color magenta = { 1, 0, 1, 1 };

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
	sprintf(result, "%.5f %.5f, %.5f, %.5f", color.r, color.g, color.b, color.a);
	return result;
}

char* color_terminal(Color color, char *label)
{
	char* result = malloc(strlen(label) * 2);
	sprintf(result, "\x1b[38;2;%.0f;%.0f;%.0fm%s\x1b[0m", color.r * 255, color.g * 255, color.b * 255, label);
	return result;
}
