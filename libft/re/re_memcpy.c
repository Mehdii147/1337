#include "lib.h"

void *re_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
	char *str;

	i = 0;
	str = (char *)dst;

	if(!dst && !src)
		return (0);
	while(i < n)
	{
		str[i] = ((char *)src)[i];
		i++;
	}
return((char *)dst);
}

