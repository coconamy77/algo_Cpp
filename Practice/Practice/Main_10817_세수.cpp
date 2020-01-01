#define _CRT_SECURE_NO_WARNINGS_	
#include <cstdio>

int n1, n2;
int main() {
	int tmp;
	scanf("%d", &tmp);
	n1 = tmp;
	scanf("%d", &tmp);
	if (n1 > tmp) {
		n2 = n1;
		n1 = tmp;
	}
	else {
		n2 = tmp;
	}
	scanf("%d", &tmp);
	if (tmp >= n2) {
		printf("%d", n2);
	}
	else if (tmp <= n1) {
		printf("%d", n1);
	}
	else {
		printf("%d", tmp);
	}


}

//main() { int a, b, c; scanf("%d%d%d", &a, &b, &c); printf("%d", (a > b ? (b > c ? b : (a > c ? c : a)) : (a > c ? a : (b > c ? c : b)))); }