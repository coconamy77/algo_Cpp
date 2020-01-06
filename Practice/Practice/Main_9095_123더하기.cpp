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
	int Ta[10];
	int T;
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &Ta[t]);
	}

	for (int t = 0; t < T; t++) {
		printf("%d\n", f(Ta[t]));
	}

}