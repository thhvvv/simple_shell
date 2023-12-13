#include <stdio.h>

/**
 * main - prints the environment
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	unsigned int j;

	j = 0;
	while (env[j] != NULL)
	{
		printf("%s\n", env[j]);
		j++;
	}
	return (0);
}
