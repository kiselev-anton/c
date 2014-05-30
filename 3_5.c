#include <stdio.h>
#include <stdlib.h>


int main() {

	int n, sum = 0, min= MAX_INT, max = MIN_INT;

	FILE *fp;
	fp = fopen("randnum.txt", "r");
	if(fp == NULL) {
		printf("Cannot open file: randnum.txt\n");
		return -1;
	}
	else {
		fscanf(fp, "%d", &n);
		for(int i = 0; i < n; i++){
			int num;
			fscanf(fp, "%u", &num);
			sum += num;
			if(num > max)
				max = num;
			if(num < min)
				min = num;
		}
		printf("sum = %d, max = %d, min = %d\n", sum, max, min);
	}

}