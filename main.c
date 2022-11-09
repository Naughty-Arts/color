#include <stdio.h>

#include "color.h"

int main()
{
	printf("------------------- Color --------------------- \n");

	c r = cred;
	cprnt("red", r);

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cterm("#", r);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}