#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @str: string to get the length of 
 * Return: the length of @str
 */
size_t _strlen(char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
