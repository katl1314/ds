#include <stdio.h>


int max(int a, int b, int c, int d) {
	int nMax = a;
	
	// nMax < b == a < b
	if (nMax < b) {
		nMax = b;
	}
	
	// nMax < c == b < c
	if (nMax < c) {
		nMax = c;
	}
	
	// nMax < d == c < d
	if (nMax < d) {
		nMax = d;
	}
	
	return nMax;
}

int print(int a, int b, int c, int d) {
	int nMax = max(a, b, c, d);
	printf("(%d, %d, %d, %d) = %d\n", a, b, c, d, nMax);
}

int min3(int a, int b, int c)
{
	int min = a;
	
	if(b < min)
		min = b;
	if(c < min)
		min = c;
	
	printf("최솟값 : %d", min);
	
}

int min4(int a, int b, int c, int d) {
	int min = a;
	
	if (b < min) {
		min = b;
	}
	
	if (c < min) {
		min = c;
	}
	
	if (d = min) {
		min = d;
	}
	
	return min;
}

int main () {
/*	print(10, 20, 22, 15);
	print(10, 25, 22, 15);
	print(100, 20, 22, 15);
	print(10, 20, 22, 35);
	print(10, 20, 22, 22);
*/
	int ix, iy, iz, ia;
	printf("값을 입력하세요.\n");
	scanf("%d %d %d %d", &ix, &iy, &iz, &ia);
	
	int nMin = min4(ix, iy, iz, ia);
	printf("(%d, %d, %d, %d) = %d\n", ix, iy, iz, ia, nMin);
	//min3(ix, iy, iz, &ia);
}

