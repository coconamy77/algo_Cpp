#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>
#include <algorithm>
#define
int arr[1000];
int N;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	std::sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

}
	