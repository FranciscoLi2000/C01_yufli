#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	str[i] = '\0';
}
#include <stdio.h>
int	main()
{
	char	s[100];

	scanf("%99s", s);
	ft_putstr(s);
	return (0);
}
