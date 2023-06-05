#include <stdio.h>
int i;
void ft_rev_int_tab (int *tab,int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
	}
int main()
{
	int tab[]={1,3,4,5,6};

	printf("at first the table was: ");
	for (i=0;i<5;i++)
		printf("%i",tab[i]);
	printf("\n\n//////////////////////////\n\n\n");
	printf("after rev :");

	ft_rev_int_tab(tab,5);
	for (i=0;i<5;i++)
                printf("%i",tab[i]);
printf("\n\n//////////////////////////\n\n\n");


}


