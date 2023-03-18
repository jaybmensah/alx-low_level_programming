/**
 * C program to find last digit of a number
 */

#include <stdio.h>

int main()
{
    int n, lastDigit;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);
	/* Get the last digit */
    lastDigit = n % 10;
	
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else   

   // printf("Last digit = %d", lastDigit);

    return 0;
}
