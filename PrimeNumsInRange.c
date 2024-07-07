#include <stdio.h>
#include<math.h>
//program to print prime numbers in a range.
int main(){
	int a, b, i, j, flag;
	printf("Enter lower bound of the interval: ");
	scanf("%d", &a);
	printf("Enter upper bound of the interval: ");
	scanf("%d", &b);
	printf("Prime numbers between %d and %d are: ", a ,b);
	for (i = a; i <= b; i++)
	{
		// Skip 0 and 1 as they are neither prime nor composite
		if (i == 1 || i == 0)
			continue;
		flag = 1;

    for (j = 2; j <= sqrt(i); ++j)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}

		// flag = 1 means i is prime and flag = 0 means i is not prime
		if (flag == 1)
			printf("%d ", i);
	}
    return 0;
}
