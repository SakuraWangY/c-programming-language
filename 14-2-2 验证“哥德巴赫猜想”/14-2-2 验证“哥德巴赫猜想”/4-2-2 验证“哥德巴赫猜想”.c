/*4-2-2 验证“哥德巴赫猜想”（20 分）
数学领域著名的“哥德巴赫猜想”的大致意思是：
任何一个大于2的偶数总能表示为两个素数之和。
比如：24=5+19，其中5和19都是素数。
本实验的任务是设计一个程序，验证20亿以内的偶数都可以分解成两个素数之和。
输入格式：

输入在一行中给出一个(2, 2 000 000 000]范围内的偶数N。
输出格式：

在一行中按照格式“N = p + q”输出N的素数分解，其中p ≤ q均为素数。
又因为这样的分解不唯一（例如24还可以分解为7+17），
要求必须输出所有解中p最小的解。
输入样例：

24
输出样例：

24 = 5 + 19*/
#include<stdio.h>
#include<math.h>
int isprimer(int n)
{
	int i;
	int isprimer = 1;
	if (n == 1) {
		isprimer = 0;
	}
	else if (n == 2) {
		isprimer = 1;
	}
	else {
		for (i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				isprimer = 0;
				break;
			}
		}
	}
	return isprimer;
}
int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (isprimer(i) && isprimer(n - i))
		{
			printf("%d = %d + %d", n, i, n - i);
			break;
		}
	}return 0;
}