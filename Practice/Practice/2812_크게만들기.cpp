#define _CRT_SECURE_NO_WORNINGS_
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int stack[500001];
int N, K, idx=0, num, len;
int number;


int main() {
	scanf("%d %d", &N, &K);
	scanf("%d", &number);
	len = N - K;
	num = number / pow(10, --N);
	number -= num*pow(10, N);
	//printf("%d", num);
	stack[idx++] = num;
	while (N>0) {
		num = number / pow(10, --N);
		number -= num * pow(10, N);
		// printf("%d¹øÂ° ¼ö: %d\n", N,num);
		if (K != 0) {
			while (idx > 0 && stack[idx-1]<num && K>0) {
				idx--;
				K--;
			}

		}
		stack[idx++] = num;
	}
	for (int i= 0; i < len; i++) {
		printf("%d", stack[i]);
	}
}