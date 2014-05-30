#include <stdio.h>

// 2_3
int main() {

	int m, n;
	double a, b, a0, delta;

	printf("Enter n, m: ");	// input
	scanf("%d %d", &n, &m);
	printf("Enter a, b: ");
	scanf("%lf %lf", &a, &b);

//	delta = (m - n) > 0 ? (b - a) / (m - n) : (a - b) / (n - m);
	delta = (b - a) / (m - n);
	a0 = a - delta * n;

	int min = m > n ? n : m;	// output
	int max = m > n ? m : n;
	for(int i = min; i <= max; i++) {
		printf("%lf ", a0+delta*i);
	}
	printf("\n");

}