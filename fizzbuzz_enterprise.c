#include "fizzbuzz_enterprise.h"

/* Handle the words in the obvious way (using fallthrough and side
   effects from the function), but at the same time return the product
   of the modular residues. It is extensible. For comparison of length
   and complexity with the simple version, this one adds command line
   arguments, help, 64-bit integers, and input sanitisation. */

unsigned long fizzbuzz(unsigned long i) {
	assert (i > 0);
	if (!(i % 3)) printf("fizz");
	if (!(i % 5)) printf("buzz");
	return (i % 3) * (i % 5);
}

/* If the function returns anything other than zero, print the number. */

int main(int argc, char ** argv) {
	unsigned long i = 0;
	unsigned long n = 0;

	switch (argc) {
		case 2: /* This is the normal case. */
			errno = 0; /* for detecting if strtoul() ran into an error */
			n = strtoul(argv[1], NULL, 10);
			switch (errno) {
				case 0:
					break; /* This is the normal case. */
				case EINVAL:
					switch (n) {
						case 0:
							fprintf (stderr, "Error in %s at line %d; strtoul(): no digits seen.\n",
								__FILE__, __LINE__);
							return EXIT_FAILURE;
							break;
						default:
							fprintf (stderr, "Error in %s at line %d; strtoul() base contains "
								"an unsupported value.\n", __FILE__, __LINE__);
							return EXIT_FAILURE;
							break;
					}
					break;
				case ERANGE:
					switch (n) {
						case ULONG_MAX:
							fprintf (stderr, "Error in %s at line %d; strtoul(): %s.\n",
								__FILE__, __LINE__, strerror(errno));
							return EXIT_FAILURE;
							break;
						default:
							fprintf (stderr, "Error in %s at line %d; this should never happen.\n",
								__FILE__, __LINE__);
							return EXIT_FAILURE;
							break;
					}
					break;
				default:
					fprintf (stderr, "Error in %s at line %d; this should never happen,\n",
						__FILE__, __LINE__);
						return EXIT_FAILURE;
					break;
			}
			break;
		default:
			fprintf (stderr, USAGE "\n", argv[0]);
			return EXIT_SUCCESS;
			break;
	}
	assert(n >= 0);

	/* The behaviour of strtoul() when given an argument with a leading
	   minus sign is to return a very large unsigned value. This is hard
	   to detect programmatically; i.e., what is "too large"? So we'll
	   just arbitrarily called 1 million "too large". */

	assert(n < 1000000);

	/* If fizzbuzz() returns anything other than zero, print the number. */

	for (i = 1; i <= n; i++) {
		if (fizzbuzz(i)) fprintf (stdout, "%lu", i);
		fprintf (stdout, "\n");
	}
	return EXIT_SUCCESS;
}

