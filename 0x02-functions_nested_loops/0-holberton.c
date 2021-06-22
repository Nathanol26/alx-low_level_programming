#include "holberton.h"

/**
 * main-print the world "Holberton"
 *
 * Return:Always 0(success)
 */
int main(void)
{

	int i;

	char p[]="Holberton";
	for(i=0;i<9;i++)
	{
	_putchar(p[i]);
	}
	_putchar('\n');
	return(0);
}
