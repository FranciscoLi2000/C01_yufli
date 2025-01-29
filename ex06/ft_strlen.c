#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>
int	main()
{
	char	s[100];

	scanf("%99s", s);
	printf("%i\n", ft_strlen(s));
	return (0);
}
