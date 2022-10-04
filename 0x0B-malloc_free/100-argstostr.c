#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates alr the arguments of your program.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: NULL if ac == 0 or av == NULL, pointer
 * to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int arg, byte, newind = 0, len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			len++;
		}
		len++;
	}
	len++;
	newstr = malloc(sizeof(char) * len);
	if (newstr == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			newstr[newind] = av[arg][byte];
			newind++;
		}
		newstr[newind] = '\n';
		newind++;
	}
	newstr[newind] = '\0';
	return (newstr);
}
