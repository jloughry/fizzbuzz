#include <stdio.h>
#include <stdlib.h>

int fizzbuzz(int);

/* Handle the words in the obvious way (using fallthrough), but at the same
   time return the product of the modular residues. Let the compiler optimize
   out the common subexpression. The goal here is clarity of expression. The
   function has benign side effects---printing the words---but is otherwise
   pure functional. It's extensible, but I didn't add the extra functionality
   for help, USAGE, command line arguments to make it work for any $n$ (with
   sanitisation of user input of course) or 64-bit integers because YAGNI. */

int fizzbuzz(int i) {
	if (!(i % 3)) printf("fizz");
	if (!(i % 5)) printf("buzz");
	return i%3 * i%5;
}

/* If the function returns anything other than zero, print the number. */

int main(void) {
	int i=0;

	for (i=1; i<=100; i++) {
		if (fizzbuzz(i)) printf ("%d", i);
		printf ("\n");
	}
	return EXIT_SUCCESS;
}

