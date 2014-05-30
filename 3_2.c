#include <stdio.h>
#include <math.h>

int quad_eq_solver(double a, double b, double c, double *x1, double *x2) {
	double discr = b*b - 4*a*c;
	if(discr >= 0) {
		*x1 = (-b + sqrt(discr)) / (2*a);
		*x2 = (-b - sqrt(discr)) / (2*a);
		return discr == 0 ? 1 : 2;
	}
	else
		return 0;
}


int main() {

	double a,b,c,x1,x2;
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("roots = %d\n", quad_eq_solver(a,b,c, &x1, &x2));

	printf("x1=%lf, x2=%lf\n", x1, x2);
	return 0;
}