#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand( time( NULL ));	// seeding random numbers
	int random_number = 0xF & rand(); // generating one 

	int guess;
	do {
		printf("Enter your guess: ");
		scanf("%d", &guess);
		if(guess == random_number)
			printf("Congratulations, your guess was correct!\n");
		else 
			guess > random_number ? printf("smaller\n") : printf("bigger\n");
	} 
	while(guess != random_number);

}