#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
int num1, num2;
int main() {
	scanf("%d", &num1);
	scanf("%d", &num2);
	 
	printf("%d\n%d\n%d\n%d", num1* (num2 % 10), num1 * ((num2 % 100)/10), num1 * (num2 / 100), num1*num2);
}