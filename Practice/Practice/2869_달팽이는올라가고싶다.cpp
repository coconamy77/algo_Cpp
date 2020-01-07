#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int A, B, V, day=1;
int main() {
	scanf("%d %d %d", &A, &B, &V);
	V -= A;
	A -= B;
	if (V%A == 0)
		day = 1 + V / A;
	else
		day = 2 + V / A;
	printf("%d", day);
}