/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:40:17 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/13 12:37:50 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s1[++i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void	ft_sort(int ac, char **av)
{
	int		done;
	int		i;
	char	*swap;

	i = 0;
	done = 1;
	while (done == 1)
	{
		done = 0;
		while (++i <= ac - 2)
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				swap = av[i + 1];
				av[i + 1] = av[i];
				av[i] = swap;
				done = 1;
			}
		i = 0;
	}
}

int		main(int ac, char **av)
{
	int		i;

	if (ac < 2)
		return (0);
	i = 0;
	ft_sort(ac, av);
	while (++i <= ac - 1)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
