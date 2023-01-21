#include <stdio.h>

/**
	오른쪽 위가 직각인 이등변 삼각형을 출력
	0: 1 2 3 4 5
	1:   2 3 4 5
	2:     3 4 5
	3:	     4 5
	4:	       5
*/

void triangleRU(int n);

int main() 
{
	int n = 5;
	triangleRU(n);
}

void triangleRU(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
}