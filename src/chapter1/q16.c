#include <stdio.h>

int triangleLB(int n) {
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int triangleRB(int n) {
	for (int i = 0; i < n; i++) 
	{
		for (int j = n - (i - 1); j > 0; j--)
		{
			printf("");
		}
		printf("\n");
	}
}


int main() {
	int n = 5;
	triangleLB(n);
	triangleRB(n);
}