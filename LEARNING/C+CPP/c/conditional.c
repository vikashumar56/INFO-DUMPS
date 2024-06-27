// C program to illustrate conditional statements
#include <stdio.h>

int main()
{
	// conditional operator will assign 10 if 5 < 25,
	// otherwise it will assign 20
	int i = 5 < 25 ? 10 : 20;

	if (i == 10)
		printf("i is 10");
	else if (i == 15)
		printf("i is 15");
	else if (i == 20)
		printf("i is 20");
	else
		printf("i is not present");
}
