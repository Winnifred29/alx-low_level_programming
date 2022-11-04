#include <stdio.h>
#include <stlib.h>
/**
 * main _ multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", toi(argv[1]) * atoi(argv[2]));
	return (0);
}
