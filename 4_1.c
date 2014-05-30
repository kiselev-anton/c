#include <stdio.h>
#include <limits.h>

void minMaxArray(int* array, int size, int *max, int *min) {
	*max = INT_MIN;
	*min = INT_MAX;
		for(int i = 0; i < size; i++) {
			if(array[i] > *max)
				*max = array[i];
			if(array[i] < *min)
				*min = array[i];
		}
}

int main() {

	int max, min;
	const int SIZE = 10;
	int array[SIZE];
	for(int i = 0; i < SIZE; i++){
		array[i]=i;
	}
	array[6] = -23;
	minMaxArray(array, SIZE, &max, &min);
	printf("%d %d\n", max, min);

}