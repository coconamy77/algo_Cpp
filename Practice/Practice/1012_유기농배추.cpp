#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>
#include <queue>

using namespace std;

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int main() {
	int T,K,N,M,x,y,tx,ty;
	int q[5000] = { 0, };
	int idx=0;
	int map[52][52] = { 0, };
	scanf("%d", &T);
	int ans = 0;
	while (T--) {
		scanf("%d %d %d", &M, &N, &K);
		ans = 0;
		while (K--) {
			scanf("%d %d", &y, &x);

			map[x+1][y+1] = 1;
		}

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				if (map[i][j]) {
					ans++;
					q[idx++] = i;
					q[idx++] = j;
					while (idx>0) {
						ty = q[--idx];
						tx = q[--idx];
						map[tx][ty] = 0;
						int nx, ny;
						for (int d = 0; d < 4; d++) {
							nx = tx + dx[d];
							ny = ty + dy[d];
							
							if (map[nx][ny]) {
								q[idx++] = nx;
								q[idx++] = ny;
							}
						}
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}