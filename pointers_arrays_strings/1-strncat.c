#include "main.h"
/**
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
        int i;
        int j;
        int ij;
        int d;

        d = 0;
        ij = 0;
        for (i = 0; src[i]; i++)
                continue;
        for (j = 0; dest[j]; j++)
                continue;
        ij = i + n;
        for (; j <= ij; j++)
        {
                dest[j] = src[d];
                d++;
        }
        return (dest);
