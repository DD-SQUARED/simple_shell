#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints two sentences using printf
 * sentence - prints a sentence using printf
 */
void first(void)
{
	printf("I enjoy programming,\n");
	printf("but sometimes it’s difficult\n");
}

