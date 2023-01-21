// Q10 두 변수 a, b에 정수를 입력한다. b - a를 구하는 소스를 작성해보자.
// 단, 변수 b는 a와 같거나, 작으면 다시 입력받는다.

#include <stdio.h>

int main() {
/*	
	int isTrue = 1;
	int sum = 0;
	int a, b;
	
	printf("변수 a입력");
	scanf("%d", &a);
	
	do {
		printf("변수 b입력");
		scanf("%d", &b);
		
		if (b > a) {
			// b가 a보다 크면, 루프를 중단 해야함.
			// while의 조건이 false일때 중단할 수 있기 때문에 falsey한 값인 0으로 함
			isTrue = 0;
		}
		else
			printf("a보다 큰 값을 입력하세요!\n");
			
	} while (isTrue);
	printf("b - a는 %d입니다.\n", b - a);
*/
	int i;
	printf("수를 입력해 주세요.: ");
	scanf("%d", &i);
	int in = i;
	int x = 0;
	do {
		in /= 10;
		x += 1;
	} while(in > 0);
	printf("그 수는 %d자리입니다.", x);
}