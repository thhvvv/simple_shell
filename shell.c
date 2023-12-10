#include "shell.h"

/**
 * main - starting point of execution during program running
 * @argc: number f command-line arguments passed
 * @argv: command-line arguments
 * @envp: holds the environment variables
 * Return: NULL
 */
int main(int argc, char **argv, char **envp)
{
	run_prompt(argv, envp);
	return (NULL);
}
