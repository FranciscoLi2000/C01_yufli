#include <unistd.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
#include <stdio.h>
int	main()
{
	int	x;
	int	*p;

	x = 0;
	p = &x;
	ft_ft(&x);
	printf("%i\n", x);
	printf("%p\n", (void *)p);
	return (0);
}
