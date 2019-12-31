#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
int num1, num2;
int ans1, ans2, ans3;
int main() {
	scanf("%d", &num1);
	scanf("%d", &num2);

	ans1 = num1* (num2 % 10);
	ans2 = num1 * ((num2 % 100)/10);
	ans3 = num1 * (num2 / 100);

	printf("%d\n%d\n%d\n%d", ans1, ans2, ans3, num1*num2);
}