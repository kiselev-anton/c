#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int my_random() {

	return rand() & (rand() << 16);

}


int main() {
	
	srand(time(NULL));
	printf("%u\n", my_random());

}
