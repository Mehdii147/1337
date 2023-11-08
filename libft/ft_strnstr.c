#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if(!needle[j] || !len)
        return((char *)haystack);
    while(haystack[i] && len > i)
    {
        j = 0;
        while(needle[j] && (haystack[i +j] == needle[j] ) && (i + j )< len)
        {
            j++;
        }
        if(!needle[j])
            return ((char *)haystack + i);
        i++;
    }
    return (NULL);
}
