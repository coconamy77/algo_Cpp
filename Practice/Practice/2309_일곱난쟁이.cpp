#define _CRT_NO_WARNINGS_
#include <cstdio>

int hobbit[9];
bool fin;
bool ansarr[96];

void getAns(int start, int dep, int ps[9]) {
	if (fin) return;
	if (dep == 9) {
		int check = 0;
		int ans = 0;
		for (int i = 0; i < 9; i++) {
			if (ps[i]) {
				check++;
				ans += hobbit[i];
			}
		}
		if (ans == 100) {
			for (int i = 0; i < 9; i++) {
				if (ps[i]) {
					ansarr[hobbit[i]] = true;
					
				}
			}

			for (int i = 1; i < 96; i++) {
				if (ansarr[i])
				printf("%d\n", i);
			}
			fin = true;
		}
	}
	else {
		for (int i = start; i < 9; i++) {
			ps[dep] = i;
			getAns(i + 1, dep + 1, ps);
		}
	}
	
}

int main() {
	
	int ps[9] = { 0, };

	for (int i = 0; i < 9; i++) {
		scanf("%d", &hobbit[i]);
	}

	getAns(0,0,ps);

}