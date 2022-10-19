#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct prin - structure that contain flag and funtion
 * @flag: character that identify funtion
 * @fn: pointer to funtion
 */

typedef struct prin
{
char flag;
char *(*fn)(va_list argu);
} sir;
void *_calloc(unsigned int nmemb, unsigned int size);
char *fntn(const char symbl, va_list);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *str_chr(va_list argu);
char *str_str(va_list argu);
int _strlen(char *s);
int _printf(const char *format, ...);
char *str_percent(va_list argu);
char *str_int(va_list argu);
#endif
