//실습 1-8 프로그램을 참고하여 n이 5면 1 +~5 = 15로 출력하는 프로그램 작성

#include <stdio.h>

int main(void)
{
	int in = 0;
	printf("n값을 입력: "); scanf("%d", &in);
	
	int isum = 0;
	for(int i =0; i <= in; i++)
	{
		isum += i;
	}
	
	printf("총합: %d", isum);
}