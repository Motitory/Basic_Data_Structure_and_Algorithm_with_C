// Input 4 Integers, Output Maximum Value
#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	return max;
}

int main(void)
{
	int a, b, c, d;

	printf("What is Maximum?\n");
	printf("a : "); scanf("%d", &a);
	printf("b : "); scanf("%d", &b);
	printf("c : "); scanf("%d", &c);
	printf("d : "); scanf("%d", &d);

	printf("Maximum : %d\n", max4(a, b, c, d));

	return 0;
}