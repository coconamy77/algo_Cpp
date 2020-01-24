#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>	

int map[502][502] = { 0, };
bool vst[502][502] = { false, };
int N, M, ans = 0;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int nx, ny;

void fun(int c, int sum, int i, int j) {
	if (c == 4) {
		printf("%d,%d = %d |",i,j,map[i][j]);
		ans = ans > sum ? ans : sum;
		return;
	}
	for (int d = 0; d < 4; d++)
	{
		nx = i + dx[d];
		ny = j + dy[d];
		if (map[nx][ny] > 0 && !vst[nx][ny]) {
			vst[nx][ny] = true;
			fun(c + 1, sum + map[nx][ny], nx, ny);
			vst[nx][ny] = false;
		}

	}
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			vst[i][j] = true;
			fun(1,map[i][j], i, j);
			vst[i][j] = false;
		}
	}

	printf("%d", ans);
}
