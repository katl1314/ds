#include <stdio.h>

void main() {
	int nWidth, nHeight;
	
	printf("λμ΄: "); scanf("%d", &nHeight);
	printf("λλΉ: "); scanf("%d", &nWidth);
	
	for (int i = 0; i < nHeight; i++)
	{
		for (int j = 0; j < nWidth; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}