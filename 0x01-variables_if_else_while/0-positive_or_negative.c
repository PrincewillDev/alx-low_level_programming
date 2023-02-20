#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Main - entry */

int main(void)
{
	/* Declaring a int type variable */
	int n;

	/* seeding a random number generator with the current time  */
	srand(time(0));

	/* Generate the number and assign it to the variable  */
	n = rand() - RAND_MAX / 2;

	/* Do something with the random number  */
	if (n > 0){
		printf("%d is positive\n", n);

	} else if (n == 0){
		printf("%d is zero\n", n);

	} else {
		printf("%d is negative\n", n);
	
	}


	return (0);
}
