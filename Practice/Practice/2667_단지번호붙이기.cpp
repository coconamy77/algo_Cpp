#include<cstdio>
#include<algorithm>
#define V(X,Y) if(X<N&&Y<N&&X>=0&&Y>=0&&f[Y][X]>48&&!v[Y][X])
char f[33][33], v[33][33];

int dx[] = { 0,-1,0,1 }, dy[] = { 1,0,-1,0 }, N;
int go(int x, int y) {
	int a = v[y][x] = 1;
	for (int i = 0; i < 4; i++)V(x + dx[i], y + dy[i])a += go(x + dx[i], y + dy[i]);
	return a;
}

int main() {
	int a[400], n = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)scanf("%s", f[i]);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (f[i][j] > 48 && !v[i][j])
				a[n++] = go(j, i);
		}
	}
	std::sort(a, a + n);
	printf("%d\n", n);
	for (int i = 0; i < n; i++)printf("%d\n", a[i]);
	return 0;
}
