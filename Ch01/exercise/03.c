// Input 4 Integers, Output Minimum Value
#include <stdio.h>

int min4(int a, int b, int c, int d)
{
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;
}

int main(void)
{
	int a, b, c, d;
	printf("What is Minimum?\n");
	printf("a : "); scanf("%d", &a);
	printf("b : "); scanf("%d", &b);
	printf("c : "); scanf("%d", &c);
	printf("d : "); scanf("%d", &d);

	printf("Minimum : %d\n", min4(a, b, c, d));

	return 0;
}