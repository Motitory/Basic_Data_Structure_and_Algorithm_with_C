// Input 3 Integers, Output Maximum Value
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("What is Maximum?\n");
	printf("a : "); scanf("%d", &a);
	printf("b : "); scanf("%d", &b);
	printf("c : "); scanf("%d", &c);

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("Maximum : %d\n", max);
	return 0;
}