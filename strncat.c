#include "main.h"
/**
 *_strncat -  concatenates two strings
 *@src: string one
 *@dest: string two
 *@n: number of bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
