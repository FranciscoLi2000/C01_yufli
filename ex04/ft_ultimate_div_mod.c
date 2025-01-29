#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
#include <stdio.h>
int	main()
{
	int	x;
	int	y;

	scanf("%i", &x);
	scanf("%i", &y);
	ft_ultimate_div_mod(&x, &y);
	printf("div=%i, mod=%i\n", x, y);
	return (0);
}
