#include<stdio.h>
double fact(int n);
int main(void)
{
	double sum;
	int j, item;
	scanf("%d", &j);
	sum = 1;
	for (item = 1;item <= j;item++)
		sum =sum+ 1/fact(item);
	printf("%.8f", sum);
	return 0;
}
double fact(int n)
{ int item;
double result;
result = 1;
for (item = 1;item <= n;item++)
result = result * item;
return result;
}