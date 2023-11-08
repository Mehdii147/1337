#include "lib.h"

void *re_memset(void *b, int c, size_t len)
{
    unsigned char *pt = (unsigned char *)b;

    while(len > 0)
    {
        *pt = (unsigned char)c;
        len--;
        pt++;
    }
    return (b);
}
int main()
{
    char str[20] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Using re_memset to set the string to 'A' for the first 5 characters
    re_memset(str, 'A', 5);
    printf("After re_memset: %s\n", str);

    // Using standard memset to set the string to 'B' for the first 5 characters
    memset(str, 'B', 5);
    printf("After memset: %s\n", str);

    return 0;
}