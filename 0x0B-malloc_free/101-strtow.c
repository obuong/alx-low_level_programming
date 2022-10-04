#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: pointer of the string to split.
 * Return: pointer to concatenated strings or NULL if it str is NULL
 */
char **strtow(char *str)
{
	char **array;
	int i = 0, j = 0, m, k = 0, letlen = 0, wlen = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') && ((str[i + 1] \
						== ' ' || str[i + 1] == '\n')))
			wlen++;
	}
	if (wlen == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (wlen + 1));
	if (array == NULL)
		return (NULL);
	for (; str[i] != '\0' && k < wlen; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			letlen = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, letlen++;
			array[k] = malloc(sizeof(char) * (letlen + 1));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k--)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < letlen; m++)
			{
				array[k][m] = str[i];
				i++;
			}
			array[k++][m] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
