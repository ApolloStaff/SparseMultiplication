#include <stdio.h>

struct poly {
	int coeff;
	int expo;
};
int main()
{
	struct poly a[10], b[10];
	int t1, t2;

	printf("\nEnter the total number of terms in the polynomial one:");
	scanf("%d", &t1);
	printf("\nEnter the coefficient and the exponents in descending order\n");
	for (int i = 0; i < t1; i++)
	{
		printf("Enter the coefficient(%d): ", i + 1);
		scanf("%d", &a[i].coeff);
		printf("Enter the exponent(%d): ", i + 1);
		scanf("%d", &a[i].expo);        /* only statement in loop */
	}
	printf("\nEnter the total number of terms in the polynomial two:");
	scanf("%d", &t2);
	printf("\nEnter the coefficient and the exponents in descending order\n");
	for (int i = 0; i < t2; i++)
	{
		printf("Enter the coefficient(%d): ", i + 1);
		scanf("%d", &b[i].coeff);
		printf("Enter the exponent(%d): ", i + 1);
		scanf("%d", &b[i].expo);        /* only statement in loop */
	}
	printf(" \nThe first polynomial is: ");
	printf("%d(x^%d)",a[0].coeff,a[0].expo);
	for (int k = 1; k < t1; k++) 
	{
		printf("+%d(x^%d)", a[k].coeff, a[k].expo);
	}
	printf(" \nThe second polynomial is: ");
	printf("%d(x^%d)",b[0].coeff,b[0].expo);
	for (int k = 1; k < t2; k++) 
	{
		printf("+%d(x^%d)", b[k].coeff, b[k].expo);
	}
	struct poly c[t1 + t2];
	for (int i = 0; i < t1 + t2; i++) 
	{
		c[i].coeff = 0;
		c[i].expo = 0;
	}

	int i, j, k;


	i = 0;
	j = 0;
	k = 0;

	for (i = 0; i < t1; i++) {
		for (j = 0; j < t2; j++) {
			c[i + j].coeff += a[i].coeff * b[j].coeff;
			c[i + j].expo = a[i].expo + b[j].expo;
			k++;
		}

	}
	printf(" \nResultant polynomial: ");
	printf("%d(x^%d)",c[0].coeff,c[0].expo);
	for (int k = 1; k < t1 + t2; k++) 
	{
		printf("+%d(x^%d)", c[k].coeff, c[k].expo);
	}

	return 0;
}
