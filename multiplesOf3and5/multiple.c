#include <stdio.h>

int main(void){
	
	int upperbound = 1000;

	int total = 0;

	int i;
	for(i = 0; i < upperbound; i++)
		if(i % 3 == 0 || i % 5 == 0)
			total += i;
	
	printf("the total of all multiples of 3 and 5 up to %i is %i\n", upperbound, total);
}
