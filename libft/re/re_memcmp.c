#include "lib.h"

int re_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s3;
    unsigned char *s4;

    s3 = (unsigned char *)s1;
    s4 = (unsigned char *)s2;
  
    if(n == 0)
        return (0);
    while(*s3 == *s4 && n - 1 > 0)
    {
        s3++;
        s4++;
        n--;
    }
    return ((int)(s3 - s4));
}