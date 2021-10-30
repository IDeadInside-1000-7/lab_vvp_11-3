#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, C, summ;
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("%i", &B);
	printf("C = ");
	scanf("%i", &C);
	int t1 = abs(A - B);
	int t2 = abs(A - C);
	if (t1 > t2)
	{
		printf("abs(A - C) = %i (Distance)", t2);
		printf("\nC = %i", C);
	}
	else if (t1 < t2)
	{
		printf("abs(A - B) = %i (Distance)", t1);
		printf("\nB = %i", B);
	}
	
}