#include <stdio.h>
#include <stdlib.h>

int fizzbuzz(int);

int fizzbuzz(int i) {
	if (!(i % 3)) printf("fizz");
	if (!(i % 5)) printf("buzz");
	return (i%3 * i%5);
}

int main(void) {
	int i=0;

	for (i=1; i<=100; i++) {
	if (fizzbuzz(i)) printf ("%d", i);
		printf ("\n");
	}
	return EXIT_SUCCESS;
}

