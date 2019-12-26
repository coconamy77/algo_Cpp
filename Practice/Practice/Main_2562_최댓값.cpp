#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max=0, val, ansi;

int main() {
	for (int i = 1; i < 10; i++) {
		scanf("%d", &val);
		if (max < val) {
			max = val;
			ansi = i;
		}

	}

	printf("%d\n %d\n", max, ansi);

}