#include <stdio.h>

int x(int a, int b);

int main()
{
	int n, m, a;

	scanf("%d%d%d", &n, &m, &a);
	printf("%.0lf\n", (double)x(n, a) * x(m, a));

	return 0;
}

int x(int a, int b)
{
	if (a % b == 0)
		return a / b;
	if (a % b != 0)
		return a / b + 1;
}