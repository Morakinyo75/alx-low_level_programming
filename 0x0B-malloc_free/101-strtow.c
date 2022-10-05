#include "main.h"
/**
 * len - return length to str
 * @str: string to be counted
 *
 * Return: length of string
 */
char **strtow(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
/**
 * num_word - counts the number of words in str
 * @str: string to be used
 *
 * Return: number of words
 */
int num_words(char *str)
{
	int i = 0, words = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (srt[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}
/**
 * strtow - splits a string into two
 * @str: string to be splitted
 *
 * Return: pointer to the array of splitted words
 */
char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, words = num_words(str);

	if (words == 0)
		return (NULL);
	splits = (char **)malloc(sizeof(char *) * (words + 1));
	if (splits != NULL)
	{
		for (i = 0; i <= len(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0') && i && (str[i - 1] != ' ')))
			{
				splits[j] = (char *)malloc(sizeof(char) * size + 1);
				if (splits[j] != NULL)
				{
					while (temp < size)
					{
						splits[j][temp] = str[(i - size) + temp];
						temp++;
					}
					splits[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(splits[j]);
					free(splits);
					return (NULL);
				}
			}
		}
		splits[words] = NULL;
		return (splits);
	}
	else
		return (NULL);
}
