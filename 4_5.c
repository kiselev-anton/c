#include <stdio.h>

struct Time {
	int hours;
	int minutes;
	int seconds;
};

void print_time(struct Time time) {
	printf("%02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
}

struct Time inc_time(struct Time time, int seconds) {
	time.seconds += seconds;
	while(time.seconds >= 60){
		time.minutes++;
		time.seconds -= 60;
	}
	while(time.minutes >= 60) {
		time.hours++;
		time.minutes -= 60;
	}
	while(time.hours >= 23)
		time.hours -= 23;
	return time;
}

int cmp_time(struct Time time1, struct Time time2) {
	if(time1.hours < time2.hours)
		return -1;
	else if(time1.hours > time2.hours)
		return 1;
	else {
		if(time1.minutes < time2.minutes)
			return -1;
		else if(time1.minutes > time2.minutes)
			return 1;
		else {
			if(time1.seconds < time2.seconds)
				return -1;
			else if(time1.seconds > time2.seconds)
				return 1;
			else {
				return 0;
			}
		}
	}

}

void swap_time(struct Time* time1, struct Time* time2) {
	int temp = time1->seconds;
	time1->seconds = time2->seconds;
	time2->seconds = temp;
	temp = time1->minutes;
	time1->minutes = time2->minutes;
	time2->minutes = temp;
	temp = time1->hours;
	time1->hours = time2->hours;
	time2->hours = temp;
}

int main() {

	struct Time time1, time2;
	time1.hours = 18, time2.hours = 18;
	time1.minutes = 58, time2.minutes = 32;
	time1.seconds = 19, time2.seconds = 19;
	print_time(time1);
	printf("\n");
	print_time(time2);
	printf("\n");

	printf("%d\n", cmp_time(time1, time2));

	time1 = inc_time(time1, 1024);
	print_time(time1);
	printf("\n");

	swap_time(&time1, &time2);
	print_time(time1);
	printf("\n");
	print_time(time2);
	printf("\n");

	return 0;

}