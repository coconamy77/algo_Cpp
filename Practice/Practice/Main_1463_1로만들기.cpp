#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<algorithm>

//int f(int n) {
//	int x, y;
//	if (n < 2)
//		return 0;
//	x = f(n / 2) + n % 2 + 1;
//	y = f(n / 3) + n % 3 + 1;
//	return std::min(x, y);//min-> algorithm
//}
//
//int main() {
//	int n;
//	int a = scanf("%d", &n);
//	printf("%d", f(n));
//	return 0;
//}

int dp[1000001];

int get(int i) {
	if (i == 2 || i == 3) {
		dp[i] = 1;
		return 1;
	}
	if (dp[i] != 0) {
		return dp[i];
	}
	int tmp;
	dp[i] = get(i - 1) + 1;
	if (i % 2 == 0) {
		tmp = get(i / 2) + 1;
		if (tmp < dp[i]) {
			dp[i] = tmp;
		}
	}
	if (i % 3 == 0) {
		tmp = get(i / 3) + 1;
		if (tmp < dp[i]) {
			dp[i] = tmp;
		}
	}
	return dp[i];
}

int main() {
	int n;

	scanf("%d", &n);
	printf("%d", get(n));
}