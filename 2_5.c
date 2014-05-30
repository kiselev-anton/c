#include <stdio.h>
#include <math.h>

int main() {

	int n;
	double eps, root, y, temp;

	printf("Enter n and eps: ");
	scanf("%d %lf", &n, &eps);

	root = 1;
	do {
		y = (root + n/root) / 2;
		temp = root;
		root = y;
	} while (fabs(temp - y) > eps);

	printf("%lf\n", root);

	return 0;
}
