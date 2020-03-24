#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>

int N,ad[15],ap[15], ans=0;
int getP(int a[]) {
	int day = 0, price = 0;
	for (int n = 0; n < N; n++) {
		if (a[n] == 1) {
			if (day) {
				return -1;
			}
			if (N - n  < ad[n]) {
				return -1;
			}
			day = ad[n]-1;
			price += ap[n];
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
		return;
	}
	a[dep] = 1;
	getD(a, dep + 1);
	a[dep] = 0;
	getD(a, dep + 1);
}

int main() {
	scanf("%d", &N);
	for (int n = 0; n < N; n++) {
		scanf("%d %d", &ad[n],&ap[n]);

	}

	int a[15] = { 0, };
	getD(a, 0);
	printf("%d", ans);
}

//0324
//void func(int idx, int sum) {
//	if (idx >= n) {
//		if (max < sum) max = sum;
//		return;
//	}
//	if (idx + t[idx] <= n) func(idx + t[idx], sum + p[idx]);
//	func(idx + 1, sum);
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d %d", &t[i], &p[i]);
//	func(0, 0);
//	printf("%d", max);
//}
