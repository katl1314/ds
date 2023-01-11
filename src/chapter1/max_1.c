#include <stdio.h>

/**
	다음 프로그램은 세 개의 정수를 입력받아 최대값을 반환한다.
	1. 변수 3개를 선언하고, scanf함수를 이용하여 세 변수에 값을 입력한다.
	2. max함수를 정의하고, 조건문을 사용하여 최대값을 구한다.
	3. return문을 통해 결과를 반환함.
*/
int max (int a, int b, int c) {
	// 변수 max 선언 후 변수 a에 할당된 값 초기화.
	int max = a;
	
	// max < b시 max = b;
	if (max < b) {
		max = b;
	}
	
	if (max < c) {
		max = c;
	}
	
	return max;
}

int main () {
	
	int a, b, c;
	
	// scanf 입력 함수
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	// 삼항 연산자 : 세개의 피연산자.
	int mMax = a < b ? b < c ? c : b : a;
	
	// 최대값
	int nMax = max(a, b, c);
	printf("최대값은 : %d, %d\n", nMax, mMax);
	
	return 0;
}

