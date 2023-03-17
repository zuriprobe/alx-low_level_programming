#include <stdio.h>

/**
* main - function that can only be called in user context
* Context: !in_interrupt()
*
* Prints a string
* Example:
*    main(0);
*/

int main(void)
{	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
