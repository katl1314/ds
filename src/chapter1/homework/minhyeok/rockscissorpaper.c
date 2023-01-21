/**
	가위바위보
	가위, 바위, 보를 이용하여 게임을 만들어보자.
	가위는 보를 승리하고
	가위는 바위한테 패배한다.
	
	즉
	가위 > 보 > 바위 > 가위, ... 순으로 꼬리 물기 형태로 구성되는듯.
	
	클린코드를 지향하자!!!!
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time()함수 포함 라이브러리

int getUser();
int getComputer();
void getCheckWinner(int user, int com);

int main () {
	int user = getUser();
	int computer = getComputer();
	getCheckWinner(user, computer);
	return 0;
}


// 사용자 입력 받는 함수
int getUser() {
	int isSuccess = 1; // isSuccess가 1이면 true, 0이면 false 플래그 변수
	int user;
	do {
		if (isSuccess == 0) {
			printf("다시 입력하세요.");
			isSuccess = 1;
		}
		
		printf("가위(0), 바위(1), 보(2)\n");
		printf("입력 >> "); scanf("%d", &user);
		
		// 입력한 값이 0,1,2 이외의 값을 입력할 경우 isSuccess는 0으로 초기화.
		
		if (user > 2 || user < 0) {
			isSuccess = 0;
		}
		
	} while (isSuccess == 0);
	
	return user;
}

// 컴퓨터의 랜덤함수를 이용(난수)하여 가위바위보를 가져온다!
// 
int getComputer() {
	// 난수 생성 함수 rand();
	srand(time(NULL)); // 매번 다른 시드값 생성
	return rand() % 3;
}

void getCheckWinner(int user, int com) {
	// 0(가위), 1(바위), 2(보)
	if (user == 0) {
		
		if (com == 0) {
			// user(가위) === com(가위)
			puts("사용자(가위), 컴퓨터(가위) >> 사용자 컴퓨터 무승부");
		}
		
		if (com == 1) {
			// user(가위) < com(바위)
			puts("사용자(가위), 컴퓨터(바위) >> 컴퓨터 승리");
		}
		
		if (com == 2) {
			// user(가위) > com(보)
			puts("사용자(가위), 컴퓨터(보) >> 사용자 승리");
		}
		return;
	}
	
	if (user == 1) {
		
		if (com == 0) {
			// user(바위) > com(가위)
			puts("사용자(바위), 컴퓨터(가위) >> 사용자 승리");
		}
		
		if (com == 1) {
			// user(바위) == com(바위)
			puts("사용자(바위), 컴퓨터(바위) >> 사용자 컴퓨터 무승부");
		}
		
		if (com == 2) {
			// user(바위) > com(보)
			puts("사용자(바위), 컴퓨터(보) >> 컴퓨터 승리");
		}
		return;
	}
	
	if (user == 2) {
		
		if (com == 0) {
			// user(보) < com(가위)
			puts("사용자(보), 컴퓨터(보) >> 컴퓨터 승리");
		}
		
		if (com == 1) {
			// user(보) < com(바위)
			puts("사용자(보), 컴퓨터(바위) >> 사용자 승리");
		}
		
		if (com == 2) {
			// user(보) > com(보)
			puts("사용자(보), 컴퓨터(보) >> 사용자 컴퓨터 무승부");
		}
		return;
	}
}