#include <stdio.h>

void main() {
	int nWidth, nHeight;
	
	printf("높이: "); scanf("%d", &nHeight);
	printf("너비: "); scanf("%d", &nWidth);
	
	for (int i = 0; i < nHeight; i++)
	{
		for (int j = 0; j < nWidth; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}