#include <stdio.h>

int nrpira(int n);

int main() 
{
	nrpira(4);
	return 0;
}

int nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		int count = (n - i) * 2 + 1;
		int test = (n - 1) * 2 + 1;
		for (int j = 1; j <= test; j++) {
			if (j >= i  && j <= test - i + 1) {
				printf("%d", i);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
}