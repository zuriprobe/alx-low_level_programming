#include <stdio.h>

/**
* main - function that can only be called in user context
* @a: some argument
* Context: !in_interrupt()
*
* Prints a string
* Example:
*    user_function(0);
*/

int main(void)
{	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
