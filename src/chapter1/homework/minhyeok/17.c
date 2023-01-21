#include <stdio.h>

void spira(int n)
{
	for (int i = 1; i <= n; i++)
	{
		// 마지막 행의 별의 개수
		int lastRow = (n - 1) * 2 + 1;
		// 현 위치의 별의 개수
		int count = (i - 1) * 2 + 1;
		int firstIndex = lastRow / 2 - i + 1;
		// 위치를 기준으로 개수만큼 별을 그린다.
		for (int j =0; j < lastRow; j++)
		{
			if (j >= firstIndex && j < firstIndex + count)
			{
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main ()
{
	spira(11);
	puts("");
	spira(10);
	// puts("");
	// spira(9);
	// puts("");
	// spira(8);
	// puts("");
	// spira(7);
	// puts("");
	// spira(6);
	// puts("");
	// spira(5);
	// puts("");
	// spira(4);
	// puts("");
	// spira(3);
	// puts("");
	// spira(2);
	// puts("");
	// spira(1);
}