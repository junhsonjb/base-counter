#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This function will take in an int
   and reverse it. This way it can
   be easier to read X^n values,
   where X is the base we want and n
   the current power which increases
   by one with each iteration  */

void reverse(int* number) {

	/* There's an issue with the sprintf()
	   function when you start with 0's
	   (and probably end with them too).
	   You're gonna have to convert ints yourself */

	int num = * number;

	/* sprintf() acts up when the number starts with
	   a 0, and probably does too if it ends with a 0
	   (I haven't checked). You're gonna have to convert
	   the number to a string some other way, or find
	   another way to do this function.
	*/

	char snum[20]; //this will be the same "value" as num just as a string
	sprintf(snum, "%d", num);	

	int a = strlen(snum) - 1;
	char new[strlen(snum)];
	for (int i = 0; i < strlen(snum); i++) {

		new[i] = snum[a];
		a--;

	}

	int result = atoi(new);//set the result var from a string back to int
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

	int num = 12;

	printf("%d\n", num);	
	reverse(&num);
	printf("%d\n", num);

	return 0;
}
