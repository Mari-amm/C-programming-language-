#include <stdio.h>

// this program check if A and B have the same sign.

int main(void)
{
	int A, B;

		printf("enter the values of A abd B: \n");
		scanf("%d%d", &A,&B);
			if (A * B > 0)
		printf("A and B have the same sign");
			else
		printf("A and B doesn't have the same sign");

  return 0;
}
