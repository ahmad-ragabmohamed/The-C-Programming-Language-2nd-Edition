#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
	char c;

	while ((c = getchar()) != EOF)
		putchar(c);
}
