#include "main.h"
/** 
  * _strcat -Entry point
  * Return: dest
  * @dest: first string
  * @src: second string
  */
char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a])
		a++;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[a] = src[i];
		len += 1;
	}
	dest[a] = '\0';
	return (dest);
}
