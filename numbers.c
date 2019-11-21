//Albert Gedeon
//Enumerates all numbers to a certain limit
#include <stdio.h>

int main(void)
{
	unsigned long long int x = 0;
	int counter = 0;
	for(counter = 0; counter <= 1000000000; counter++)
		printf("%llu\n", x++);

	return 0;
}
