#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>

int main() {
	int hr, min;
	scanf("%d %d", &hr, &min);

	if (min < 45) {
		hr = hr - 1;
		min = (min + 15) % 60;
	}
	else {
		min = min - 45;
	}
	if (hr < 0) {
		hr = 23;
	}
	printf("%d %d", hr, min);
}