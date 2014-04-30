#include <stdio.h>

int main() {

	double a0, delta;
	int n;

	printf("Enter a0 and delta: ");		// Input
	scanf("%lf %lf", &a0, &delta);
	printf("Enter n: ");
	scanf("%d", &n);

	printf("a_n is equal to %lf\n", a0+n*delta); // Output

	return 0;

}