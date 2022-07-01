#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - entry point*/

/* Return : 0 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
Printf("The last digit of %d is", n);
	if (n > 5)
	{
	printf("is greater than 5\n");
	}
if (n == 0)
	{
	printf("0");
	}
if ((n < 6 && != 0)
	{
printf("less than 6 and not 0");
	}
return (0);
}
