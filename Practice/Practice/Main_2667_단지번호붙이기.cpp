#include<cstdio>
#include<algorithm>
#define R(X,Y) for(int X=0;X<Y;X++)
#define V(X,Y) if(X<N&&Y<N&&X>=0&&Y>=0&&f[Y][X]>48&&!v[Y][X])
char f[33][33], v[33][33];
int dx[] = { 0,-1,0,1 }, dy[] = { 1,0,-1,0 }, N;
int go(int x, int y) {
	int a = v[y][x] = 1;
	R(i, 4)V(x + dx[i], y + dy[i])a += go(x + dx[i], y + dy[i]);
	return a;
}
int main() {
	int a[400], n = 0;
	scanf("%d", &N);
	R(i, N)scanf("%s", f[i]);
	R(i, N)R(j, N)if (f[i][j] > 48 && !v[i][j])a[n++] = go(j, i);
	std::sort(a, a + n);
	printf("%d\n", n);
	R(i, n)printf("%d\n", a[i]);
	return 0;
}