#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j--;
		i++;
	}
}
#include <stdio.h>
int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
