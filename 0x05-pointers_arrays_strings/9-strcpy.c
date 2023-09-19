#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: The buffer to copy the string to
 * @src: The string to copy
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int arr_loc;

	while (src[arr_loc])
	{
		dest[arr_loc] = src[arr_loc];
		arr_loc++;
	}
	return (dest);
}
