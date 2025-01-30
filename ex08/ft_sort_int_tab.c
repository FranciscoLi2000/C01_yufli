#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
#include <stdio.h>
int	main()
{
	int	tab[6] = {56, 32, 50, 66, 12, 2};
	int	size = sizeof(tab) / sizeof(tab[0]);
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
		printf("%i ", tab[i]);
	printf("\n");
	return (0);
}
