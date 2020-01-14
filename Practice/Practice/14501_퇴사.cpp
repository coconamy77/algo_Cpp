#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>

int N,arr[15][2], ans=0;
int getP(int a[]) {
	int day = 0, price = 0;
	for (int n = 0; n < N; n++) {
		if (a[n] == 1) {
			if (day) {
				return -1;
			}
			if (N - n + 1 < arr[n][0]) {
				return -1;
			}
			day = arr[n][0];
			price += arr[n][1];
		}
		else {
			if (day) {
				day--;
			}
		}

	}
	return price;
}

void getD(int a[], int dep) {
	if (dep == N) {
		int price = getP(a);
		if (price != -1) {
			ans = ans > price ? ans : price;
		}
	}
	a[dep] = 1;
	getD(a, dep + 1);
	a[dep] = 0;
	getD(a, dep + 1);
}

int main() {

	for (int n = 0; n < N; n++) {
		scanf("%d %d", &arr[n][0],&arr[n][1]);

	}

	int a[15] = { 0, };
	getD(a, 0);
	printf("%d", ans);
}