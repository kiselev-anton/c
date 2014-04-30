#include <stdio.h>

int main() {

	unsigned int a;
	signed int b;

	printf("Enter unsigned and signed values:");
	scanf("%u %d", &a, &b);

	printf("a as signed is %d, a as unsigned is %u\n"
		"b as signed is %d, b as unsigned is %u\n",
		 a, a, b, b);

	return 0;
}