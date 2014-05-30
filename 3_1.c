#include <stdio.h>

int max3(int arg1, int arg2, int arg3) {
	if(arg1 > arg2) {
		return arg1 > arg3 ? arg1 : (arg2 > arg3 ? arg2 : arg3);
	}
	else {
		return (arg2 > arg3 ? arg2 : arg3);
	}
/*
  if (a < b) a = b;
  if (a < c) a = c;
  return a;

  return max2(a, max2(b,c));
*/	
}


int main() {

	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", max3(a,b,c));

	return 0;
}