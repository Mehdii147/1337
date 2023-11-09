#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *loc;
    loc = malloc(count * size);
    if(!loc)
        return (NULL);
    ft_bzero(loc,count * size);
    return(loc);
}