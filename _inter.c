#include "shell.h"
/**
 * interactive - If the shell is in interactive mode, this function returns true
 * @arguements: address of a structure
 * Return: 1 for interactive mode, otherwise 0
 */
int interactive(arguements_t *arguments)
{
	return (isatty(STDIN_FILENO) && arguments->readfd <= 2);
}

/**
 * _delim - determines whether the character is a delimeter
 * @c: the character to be checked
 * @delim: the string of delimeters
 * Return: 1  true, else 0 for false
 */
int _delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

