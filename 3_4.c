#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_random() {

	return rand() & (rand() << 16);

}

void random_generation(int n, int a, int b) {
	FILE *fp;
	fp = fopen("randnum.txt", "w");

	int len = b - a;

	fprintf(fp, "%d\n", n);
	for(int i = 0; i < n; i++) {
		fprintf(fp, "%u ", (my_rando() % (len+1)) + a);
	}
	fprintf(fp, "\n");
	fclose(fp);
}


int main() {

	srand(time(NULL));
	unsigned int n, a, b;
	scanf("%u %u %u", &n, &a, &b);
	random_generation(n, a, b);

}