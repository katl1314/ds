#include <stdio.h>

int main() {
	
	int n;
	
	printf("입력: ");
	scanf("%d", &n);
	
	// 홀수일때는 + 1
	int loopCnt = n % 2 ? (n / 2) + 1 : n / 2;
	int sum = 0;
	for (int i = 0; i < loopCnt; i++) {
		if (i + 1 == n - i) {
			sum += i + 1;
			continue;
		}
		sum += (i + 1 + n - i);
	}
	printf("%d\n", sum);
}