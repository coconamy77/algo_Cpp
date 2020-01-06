#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>

int main() {
	int ans=-1;
	int N;
	scanf("%d", &N);
	ans = N / 5;

	if (N % 5 == 0) {
		printf("%d", ans);
	}
	else {
		N = N % 5;//4
		for (int i = 0; i <= ans; i++) {
			if ((N + 5 * i) % 3 == 0) {
				ans = ans - i + ((N + 5 * i) / 3);
				printf("%d", ans);
				break;
			}
			if (i == ans) {
				printf("%d",-1);
			}
		}
	}
}