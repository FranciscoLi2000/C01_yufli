#include <unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
#include <stdio.h>
int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	scanf("%i", &a);
	scanf("%i", &b);
	ft_div_mod(a, b, &div, &mod);
	printf("div=%i, mod=%i\n", div, mod);
	return (0);
}

