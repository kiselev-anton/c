#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double s;
	printf("Enter an integer: ");
	scanf("%d", &n);
	s = sqrt(n);
	printf("You have entered %d, it doubled is %d, "
		"it's square root is %f\n", n, 2*n, s);
	return 0;
}