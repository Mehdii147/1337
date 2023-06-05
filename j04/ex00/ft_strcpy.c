#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest ,char *src)
{
	int i=0;
	
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);	
}	

int main()
{
	char src[]   = "beautiful";
	char src1[]  = "beautiful";
	char dest[]  = "wo";
	char dest1[] = "wo";
	printf("%s",ft_strcpy(dest,src));
	printf("\n%s",ft_strcpy(dest1,src1));
}
