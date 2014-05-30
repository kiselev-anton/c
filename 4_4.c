#include <stdio.h>

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
	double *array = (char *) malloc(n * sizeof(char));
	for(int i = 0; i < n; i++)
		printf("%f ", array[i]);
	printf("\n");
	ReverseArray(array, n);
	for(int i = 0; i < n; i++)
		printf("%f ", array[i]);
	printf("\n");

	free(array);
}