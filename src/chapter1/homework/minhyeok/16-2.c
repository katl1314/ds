#include <stdio.h>

/**
	왼쪽 위가 직각인 이등변 삼각형을 출력
	*****
	****
  	***
	**
	*
*/

void triangleLU(int n);

int main() 
{
	int n = 5;
	triangleLU(n);
}

void triangleLU(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}