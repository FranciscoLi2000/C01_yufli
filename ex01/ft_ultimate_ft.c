#include <unistd.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
#include <stdio.h>
int	main()
{
	int x = 0;
	int *p = &x;
	int **p1 = &p;
	int ***p2 = &p1;
	int ****p3 = &p2;
	int *****p4 = &p3;
	int ******p5 = &p4;
	int *******p6 = &p5;
	int ********p7 = &p6;
	ft_ultimate_ft(&p7);
	printf("%i\n", x);
	printf("%p\n", (void *)&x);
	return (0);
}
