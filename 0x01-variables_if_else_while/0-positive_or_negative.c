#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;	
	printf("Enter Your Number: ");	
	scanf("%d",&n);
        
	if (n > 0) printf ("%d is negative",n);
	
	else if (n == 0) printf("%d is zero",n);
        
	else printf("%d is negative",n);
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
