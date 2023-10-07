#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * numeric - Check if a string contains only numeric characters.
 * @str: The input string to check.
 *
 * Return: 1 if the string contains only numeric characters, 0 otherwise.
 */
int numeric(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - Multiply two large positive numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of the multiplication as a dynamically allocated string.
 * The string must be freed after use.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int lenResult = len1 + len2;
	char *result, *finalResult;
	int i, j, sum, start;

	result = calloc(lenResult + 1, sizeof(char));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');

			sum = product + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	for (i = 0; i < lenResult; i++)
	{
		result[i] += '0';
	}

	start = 0;
	while (start < lenResult && result[start] == '0')
	{
		start++;
	}

	if (start == lenResult)
	{
		free(result);
		return (strdup("0"));
	}

	finalResult = strdup(result + start);
	free(result);
	return (finalResult);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3 || !numeric(argv[1]) || !numeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply(num1, num2);

	printf("%s\n", result);

	free(result);

	return (0);
}

