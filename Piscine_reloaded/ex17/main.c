
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int ac, char **av)
{
	char *s1;
	char *s2;

	(void)ac;
	s1 = av[1];
	s2 = av[2];
	printf("s1 = %s\ns2 = %s\ndiff = %d", s1, s2, ft_strcmp(s1, s2));
	return (0);
}
