#include "main.h"

int main()
{
	 char *str;

	str = "hello world";
	printf("ft_strlen(%s) => %i\n\n", str, ft_strlen(str));
	printf("strlen(%s) => %lu\n", str, strlen(str));
	printf("\n\n//////////////////////////\n\n\n");
	str = "Hello World!\0 abc";
	printf("ft_strlen(Hello World!\\0 abc) => %i\n\n", ft_strlen(str));
	printf("strlen(Hello World!\\0 abc) => %lu\n", strlen(str));
	return (0);

}
