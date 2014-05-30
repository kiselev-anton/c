#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int my_random() {
	return rand() | (rand() << 16);
}

int random_generation(int a, int b) {
	int len = b - a;
	return (my_random() % (len+1)) + a;
}


double *GenArray(int n, int a, int b) {
	double *array = (double *) malloc(n * sizeof(double));
	srand(time(NULL));
	for(int i = 0; i < n; i++)
		array[i] = (double) random_generation(a, b);
	return array;
}

void ReverseArray(double* array, int size) {
	for(int i = 0; i < ((size+1) / 2); i++){
		double temp = array[i];
		array[i] = array[(size-1)-i];
		array[(size-1)-i] = temp;
	}
}

int main() {
	printf("Enter n, a, b:");
	int n,a,b;
	scanf("%d %d %d", &n,&a,&b);
	double *array = GenArray(n,a,b);
	for(int i = 0; i < n; i++)
		printf("%f ", array[i]);
	printf("\n");
	ReverseArray(array, n);
	for(int i = 0; i < n; i++)
		printf("%f ", array[i]);
	printf("\n");

	free(array);
}