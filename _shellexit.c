#include "shell.h"

/**
 * _shellexit - closes the shell
 * @arguments : Structure with potential arguments, keeps consistent function prototype
 * Return: exits with a certain exit status
 */
int _myexit(arguments_t *arguments)
{
	int exitcheck;

	if (arguments->argv[1])
	{
		exitcheck = _errinter(arguments->argv[1]);
		if (exitcheck == -1)
		{
			arguments->status = 2;
			print_error(arguments, "Illegal number: ");
			_eputs(arguments->argv[1]);
			_eputchar('\n');
			return (1);
		}
		arguments->err_num = _errinter(arguments->argv[1]);
		return (-2);
	}
	arguments->err_num = -1;
	return (-2);
}

