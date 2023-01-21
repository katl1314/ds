#include <stdio.h>

/**
	오른쪽 아래가 직각인 이등변 삼각형을 출력
	0:         *
	1:       * *
	2:     * * *
	3:	 * * * *
	4: * * * * *
*/

void triangleRB(int n);

int main() 
{
	int n = 5;
	triangleRB(n);
}

void triangleRB(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (j >= n - i - 1)
			{
				printf("*");
			}
			else 
			{
				printf(" ");	
			}
		}
		printf("\n");
	}
}