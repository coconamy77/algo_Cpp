#define _CRT_SECURE_NO_WORNINGS_
#include <stdio.h>

int count[1000001];
int N,tmp,min=1000000;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);
		if (min > tmp) {
			min = tmp;
		}
		if (tmp >= 0) {
			count[tmp] += 10;
		}
		else {
			count[-tmp] += 1;
		}
	}
	for (int i = min; N>0; i++) {
		if (i < 0) {
			if (count[-i] % 10 == 1) {
				printf("%d\n", i);
				N--;
			}
		}
		else {
			if (count[i] / 10) {
				printf("%d\n", i);
				N--;
			}
		}
	}


}

//#include <cstdio>
//int main() {
//	char input[1 << 20], output[1 << 20], chk[2000001] = { 0 };
//	int N, temp;
//	setvbuf(stdin, input, _IOFBF, sizeof(input));
//	setvbuf(stdout, output, _IOFBF, sizeof(output));
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d", &temp);
//		++chk[1000000 + temp];
//	}
//	for (register int i = 0; i <= 2000000; ++i)
//		if (chk[i])
//			printf("%d\n", i - 1000000);
//}