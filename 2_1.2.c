#include <stdio.h>

// 2_1
double my_abs(double number) {
	return (number > 0) ? number : -number;
}



// 2_2
double my_pow_fast(double number, int power) {
	if(power < 0) 
		return my_pow_fast(1 / number, -power);
	else
		switch(power) {
			case 0:
				return 1;
				break;
			case 1:
				return number;
				break;
			default:
				return (power % 2) ? number * my_pow_fast(number * number, (power-1) / 2) : my_pow_fast(number * number, power / 2);
				break;
		} 
}

double my_pow(double number, int power) {

	double result = 1;
	if(power < 0)
		return my_pow(1/number, -power);
	else
		for(int i = 0; i < power; i++) {
			result *= number;
		}

	return result;
}

double my_pow_fast(double number, int power); // funcion call prototype
int main() {

	double number;
	int power;

	printf("Enter some numbers:" ); // input
	scanf("%lf %d", &number, &power);

	number = my_pow(number, power);

	printf("%lf\n", number); // output

}