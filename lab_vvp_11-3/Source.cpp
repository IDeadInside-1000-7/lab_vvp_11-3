#include <stdio.h>
#include <math.h>
int main()
{
	int Ax, Ay, Bx, By, Cx, Cy;
	printf("Enter coordinates of A:");
	printf("\nAx = ");
	scanf("%i", &Ax);
	printf("\nAy = ");
	scanf("%i", &Ay);
	printf("\nEnter coordinates of B:");
	printf("\nBx = ");
	scanf("%i", &Bx);
	printf("\nBy = ");
	scanf("%i", &By);
	printf("\nEnter coordinates of C:");
	printf("\nCx = ");
	scanf("%i", &Cx);
	printf("\nCy = ");
	scanf("%i", &Cy);
	int AB = sqrt((pow((Bx - Ax), 2)) + (pow((By - Ay), 2)));
	int AC = sqrt((pow((Cx - Ax), 2)) + (pow((Cy - Ay), 2)));
	if (AB < AC)
	{
		printf("\nThat point is C:\n");
		printf("AC = %i (Distance between A and C)", AC);
	}
	else if (AB > AC)
	{
		printf("\nThat point is B:\n");
		printf("AB = %i (Distance between A and B)", AB);
	}
}
