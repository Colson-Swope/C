#include <stdio.h>

int sum(int x, int y);

int main()
{
	int x = 1;
	int y = 2;

	int result = sum(x, y);
	
	printf("Result: %d", result);

    return result;
}