#include <stdio.h>

// 2_1
double my_abs(double number) {
	return (number > 0) ? number : number * (-1);
}

// 2_2
double my_pow(double number, int power) {
	// using tail recursion, compiler can optimize it 
	return (power == 0) ? 1 : number * my_pow(number, power - 1);
}

double my_pow(double number, int power); // funcion call prototype
int main() {

	double number;
	int power;

	printf("Enter some numbers:" ); // input
	scanf("%lf %d", &number, &power);

	number = my_pow(number, power);

	printf("%lf\n", number); // output

}