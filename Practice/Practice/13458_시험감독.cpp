#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>


int main() {
	int N,b,c;
	int a[1000000];
	long long int ans;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d %d", &b, &c);

	ans = N;

	for (int i = 0; i < N; i++) {
		a[i] -= b;
		if (a[i] > 0) {
			ans += a[i] / c;
			if (a[i] % c > 0) {
				ans++;
			}

		}

	}
	printf("%d", ans);

}