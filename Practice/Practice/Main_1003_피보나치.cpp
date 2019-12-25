#include <stdio.h>
#include<cstdio>
#include<algorithm>

int main()
{
	int T;
	int n;
	int f0[43] = { 1, 0 };
	int f1[43] = { 0, 1 };
	for (int i = 2; i < 41; i++)
	{
		f0[i] = f0[i - 2] + f0[i - 1];
		f1[i] = f1[i - 2] + f1[i - 1];
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &n);
		printf("%d %d\n", f0[n], f1[n]);
	}
}