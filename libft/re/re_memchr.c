#include "lib.h"

void *re_memchr(const void *s, int c, size_t n)
{
   size_t i;

   i = 0;
    while(i < n)
    {
    if(((unsigned char *)s)[i] == (unsigned char)c)
        return ((unsigned char)c);
    i++;
    }
    return (0);
}
