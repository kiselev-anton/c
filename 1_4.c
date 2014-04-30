#include <stdio.h>
#include <math.h>

// длина дуги и площадь сектора, фи в градусах 
int main() {

	double r;
	double phi;

	printf("Enter radius and angle:" ); // input
	scanf("%lf %lf", &r, &phi);

	phi = phi * M_PI / 180; // convertation to radians

	printf("Your arc length is %lf, your area of sector %lf\n",
		r*phi, r*r*phi/2);

	return 0;

}