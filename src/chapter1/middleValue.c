#include <stdio.h>

int main () 
{
	int a = 3, b = 1, c = 5;
	int count = 3;
	int middleValue;
	
	// 세 변수 입력
	//scanf("%d", &a);
	//scanf("%d", &b);
	//scanf("%d", &c);
	
	// 다음과 같이 작성하게 되면 비교할 변수가 100개 정도 늘어났을때 비효율적일것이다.
	if (a > b) {
		if (c > a) {
			//c > a > b
			middleValue = a;
		} else {
			// a > c > b
			middleValue = c;
		}
	} else if (b > a) {
		if (c > b) {
			middleValue = b;
		} else {
			middleValue = c;
		}
	} else if (c > a) {
		if (b > c) {
			middleValue = c;
		} else {
			middleValue = b;
		}
	} else if ( a > c ) {
		if (b > a) {
			middleValue = a;
		} else {
			middleValue = b;
		}
	} else if (b > c) {
		if (a > b) {
			middleValue = b;
		} else {
			middleValue = a;
		}
	}
	
	printf("중간값 : %d", middleValue);
}