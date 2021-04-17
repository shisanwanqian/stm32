#include<stdio.h>

int fac(int n)
{
	if (n > 1)
	{
		return n * fac(n - 1);
	}
	else return 1;
}
int main()
{
	int i;
	int n;
	scanf_s("%d", &i);
	n = fac(i);
	printf_s("%d", n);
	return 0;
}