#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>	
#include <algorithm>

int N,M;
int num[100] = { 0, };
int ans[5000000] = { 0, };
int main() {
	int min = 1000000001;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
		min = min < num[i] ? min : num[i];
	}
	int l,idx=0;
	bool c = false;
	for (int i = 0; i <= min; i++) {
		for (int j = 2; j <= min; j++) {
			if ((min-i)%j == 0) {
				for (int k = 0; k < idx; k++) {
					if (ans[k] == j) {
						c = true;
						break;
					}
				}
				if (c) {
					c = false;
					continue;
				}
				for (int k = 0; k < N; k++) {
					//printf("j = %d i = %d ", num[k], i);
					if ((num[k] - i) % j != 0) {
						//printf("j = %d i = %d ",num[k],i);
						break;
					}
					if (k == N - 1) {
						//printf("i: %d j: %d ", i, j);
						ans[idx++] = j;
					}
				}
			}

		}


		
	}

	std::sort(ans, ans + idx);

	for (int i = 0; i < idx; i++) {

		printf("%d ", ans[i]);
	}

}