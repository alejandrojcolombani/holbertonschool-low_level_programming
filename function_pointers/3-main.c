#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple calculator operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of the operation
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(num1, num2);

	printf("%d\n", result);

	return (0);
}
