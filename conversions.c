#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This function will take in an int
   and reverse it. This way it can
   be easier to read X^n values,
   where X is the base we want and n
   the current power which increases
   by one with each iteration  */

void reverse(int *number) {

	int num = *number;
	//find a way to reverse this number bruh

	char snum[20];
	sprintf(snum, "%d", num);	

	int a = strlen(snum) - 1;
	char new[strlen(snum)];
	for (int i = 0; i < strlen(snum) - 1; i++) {

		new[i] = snum[a];
		a--;

	}

	int result = atoi(snum);
	//now store the result number into the original pointer
	*number = result;

}

void fromBinary(int first, int second) {

	//we need to parse each int as a string
	//and up the value of each 1 or 0 by
	//2^n where n is zero at first and increments 
	//with the next number in the string

	//char ex[] = "hello";
	//reverse(ex);
	//printf("%s", ex);

}

int main() {

	int num = 100;

	printf("%d\n", num);	
	reverse(&num);
	printf("%d\n", num);


	return 0;
}
