#include "main.h"
/**
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
        int i;
        char *ret;

        for (i = 0; s[i]; i++)
        {
                if (s[i] == accept)
		{
                        ret = &s[i];
                        break;
                }
                else
                {
                        ret = '\0';
                }
        }
        return (ret);
}
