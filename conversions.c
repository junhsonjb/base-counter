#include <stdio.h>
#include <string.h>

/* this function will take two binary
ints and add them in binary */

void reverse(char string[]) {

	char newString[strlen(string)];
	int a = strlen(string) - 1;
	for (int i = 0; i < strlen(string); i++) {

		newString[i] = string[a];
		a--;
	}

	//I want to save the result of this method
	//in a pointer here, gotta figure out how
	//to do that
	string = newString;

}

void fromBinary(int first, int second) {

	//we need to parse each int as a string
	//and up the value of each 1 or 0 by
	//2^n where n is zero at first and increments 
	//with the next number in the string

	char ex[] = "hello";
	reverse(ex);
	printf("%s", ex);

}

int main() {

	char ex[] = "hello\n";
	reverse(ex);
	printf("%s", ex);

	return 0;
}
