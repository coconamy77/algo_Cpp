#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>

int N,arr[15][2], ans=0;
int getP(int a[]) {
	for (int n = 0; n < N; n++) {
		if (a[n] == 1) {

		}

	}
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
	return 0;
}

int main() {

	for (int n = 0; n < N; n++) {
		scanf("%d %d", &arr[n][0],&arr[n][1]);

	}

	int a[15];
	getD(a, 0);

}