#define _CRT_NO_WARNINGS_
#include <cstdio>

int hobbit[9];
bool fin;

void getAns(int dep, int ps[9]) {
	if (fin) return;
	if (dep == 9) {
		int ans = 0;
		for (int i = 0; i < 9; i++) {
			if (ps[i]) {
				ans += hobbit[i];
			}
		}
		if (ans == 100) {
			for (int i = 0; i < 9; i++) {
				if (ps[i]) {
					printf("%d\n", hobbit[i]);
				}
			}
			fin = true;
		}
	}
	else {
		ps[dep] = 0;
		getAns(dep + 1, ps);
		ps[dep] = 1;
		getAns(dep + 1, ps);
	}

}

int main() {
	
	int ps[9] = { 0, };

	for (int i = 0; i < 9; i++) {
		scanf("%d", &hobbit[i]);
	}

	getAns(0,ps);

}