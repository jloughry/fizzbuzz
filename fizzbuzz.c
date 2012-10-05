#include <stdio.h>
#include <stdlib.h>

int fizzbuzz(int);

/* Handle the words in the obvious way (using fallthrough), but also
   return the product of the modular residues.  Let the compiler optimize
   out the common subexpression.  The goal here is clarity of expression. */

int fizzbuzz(int i) {
	if (!(i % 3)) printf("fizz");
	if (!(i % 5)) printf("buzz");
	return i%3 * i%5;
}

/* If the function is anything other than zero, display the number. */

int main(void) {
	int i=0;

	for (i=1; i<=100; i++) {
		if (fizzbuzz(i)) printf ("%d", i);
		printf ("\n");
	}
	return EXIT_SUCCESS;
}

