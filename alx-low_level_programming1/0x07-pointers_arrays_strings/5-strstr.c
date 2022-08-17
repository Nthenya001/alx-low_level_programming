#include "main.h"
/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/
char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;


