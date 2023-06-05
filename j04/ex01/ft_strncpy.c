#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest ,char *src,unsigned int n)
{
	unsigned int i=0;
		while (i < n && src[i])
		{	
		dest [i] =src[i];
		i++;
		}
	
		while(i < n)
		{
		dest [i] = '\0';
		i++;
		}
	return (dest);

}
int main ()
{
	char dest[42];
	char src[] = "abcdefg";
	unsigned int n;

	n= 27;
	printf("%s",ft_strncpy(dest,src,n));
	
}
