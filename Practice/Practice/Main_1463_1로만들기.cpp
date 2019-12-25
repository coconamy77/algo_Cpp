#include<cstdio>
#include<algorithm>
int f(int n) {
	int x, y;
	if (n < 2)
		return 0;
	x = f(n / 2) + n % 2 + 1;
	y = f(n / 3) + n % 3 + 1;
	return std::min(x, y);
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}