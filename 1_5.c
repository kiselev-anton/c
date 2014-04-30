#include <stdio.h>

int main() {

	unsigned int a, b, c, result;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);

	result = (a & 1);
	result <<= 1;
	result += (b & 2) >> 1;
	result <<= 1;
	result += (b & 4) >> 2;
	result <<= 3;
	result += (c & 7);

	printf("Result is %x\n", result);

	return 0;

}