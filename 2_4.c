#include <stdio.h>

int main() {

	int a, b, n, temp;

	printf("Enter n: ");
	scanf("%d", &n);

	a = 0; 
	b = 1;
	for(int i = n; i >= 0; i--) {
		temp = a;
		a += b;
		b = temp;
	}

	printf("Result is %d\n", b);
	
}