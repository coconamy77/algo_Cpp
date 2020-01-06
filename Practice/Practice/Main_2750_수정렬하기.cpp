#include <cstdio>
#include <algorithm>

int main() {
	int N, arr[1000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	std::sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

}
	