#include <stdio.h>

int main() {

	FILE *fp;
	fp = fopen("poly.txt", "r");
	if(fp == NULL) {
		printf("Cannot open file: poly.txt\n");
		return -1;
	}
	else {
		double point, result = 0;
		int n;
		fscanf(fp, "%lf", &point);
		fscanf(fp, "%d", &n);

		for(int i = 0; i < n; i++) {
			double curr_coef;
			fscanf(fp, "%lf", &curr_coef);
			result = result * point + curr_coef;
		}
		printf("result = %lf\n", result);
	}

}