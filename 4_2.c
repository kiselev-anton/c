#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_random() {
	return rand() & (rand() << 16);
}

int random_generation(int a, int b) {
	int len = b - a;
	return (my_random() % (len+1)) + a;
}

int *GenArray(int n, int a, int b) {
	int *array = (int *) malloc(n * sizeof(int));
	srand(time(NULL));
	for(int i =0; i < n; i++)
		array[i] = random_generation(a, b);
	return array;
}

int main() {
	printf("Enter n, a, b:");
	int n,a,b;
	scanf("%d %d %d", &n,&a,&b);
	int *array = GenArray(n,a,b);
	for(int i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");

	free(array);
}