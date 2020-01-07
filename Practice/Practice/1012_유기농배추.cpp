#define _CRT_SECURE_NO_WARNINGS_
#include <cstdio>
#include <queue>

using namespace std;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main() {
	int T,K,N,M,x,y;
	queue<int> q;
	int map[50][50];
	scanf("%d", &T);

	while (T--) {
		scanf("%d %d %d", &M, &N, &K);
		int ans = 0;
		while (K--) {
			scanf("%d %d", &y, &x);

			map[x][y] = 1;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map[i][j] == 1) {
					ans++;
					map[i][j] = 0;
					q.push(i * 100 + j);
					while (q.size()) {
						int tx = q.front();
						q.pop();
						int ty = tx % 100;
						tx = tx / 100;
						int nx, ny;
						for (int d = 0; d < 4; d++) {
							nx = tx + dx[d];
							ny = ty + dy[d];
							if (nx >= 0 && ny >= 0 && nx < N && ny < M && map[nx][ny]==1) {
								map[nx][ny] = 0;
								q.push(nx * 100 + ny);
							}
						}
					}
				}
			}
		}
		printf("%d\n", ans);
	}
}