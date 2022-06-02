#include <stdio.h>

/**
 * main - a C program that prints the size of various types on
 * the computer it is compiled and run on.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{

	printf("Size of a char: %d\n byte(s)", sizeof(char));
	printf("Size of a int: %d\n byte(s)", sizeof(int));
	printf("Size of a long int: %d\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %d\n byte(s)", sizeof(long long int));
	printf("Size of a float: %d\n byte(s)", sizeof(float));
	return (0);

}
