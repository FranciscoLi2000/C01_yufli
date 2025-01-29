#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int	main()
{
	int	x;
	int	y;

	printf("x: ");
	scanf("%i", &x);
	printf("y: ");
	scanf("%i", &y);
	ft_swap(&x, &y);
	printf("x=%i, y=%i\n", x, y);
	return (0);
}
