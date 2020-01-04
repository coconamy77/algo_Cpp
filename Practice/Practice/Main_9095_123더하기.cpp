#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>	

int a[11];
int f(int n) {
	if (a[n] != 0) {
		return a[n];
	}
	for (int i = 1; i <=3; i++) {
		a[n] += f(n - i);
	}
	return a[n];
}

int main() {
	int T;

	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int n;
		scanf("%d", &n);
		a[1] = 1;
		f(n);
	}
}