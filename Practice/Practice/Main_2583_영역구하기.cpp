#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
bool check[101][101] = { false };
int m, n, k, cnt, arr[1000];
int x1, y1, x2, y2, piece;
void swap(int &a, int &b) {
	int temp; temp = a;
	a = b; b = temp;
}
void bubbleSort(int n) {
	int a = n;
	for (int j = 0; j < a; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
		}n--;
	}
}
void makeBox(int x1, int y1, int x2, int y2) {
	for (int i = y1; i <= y2 - 1; i++)
		for (int j = x1; j <= x2 - 1; j++)
			check[i][j] = false;
}
void box_DFS(int x, int y) {
	piece++;
	check[x][y] = false;
	if (y + 1 < n && check[x][y + 1]) box_DFS(x, y + 1);
	if (x + 1 < m && check[x + 1][y]) box_DFS(x + 1, y);
	if (y - 1 >= 0 && check[x][y - 1]) box_DFS(x, y - 1);
	if (x - 1 >= 0 && check[x - 1][y]) box_DFS(x - 1, y);
}
int main() {
	scanf("%d %d %d", &m, &n, &k);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			check[i][j] = true;
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		makeBox(x1, y1, x2, y2);
	}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (check[i][j]) {
				piece = 0;	box_DFS(i, j);
				arr[cnt] = piece; cnt++;
			}
	printf("%d\n", cnt);
	bubbleSort(cnt);
	for (int i = 0; i < cnt; i++)
		printf("%d ", arr[i]);
	return 0;
}