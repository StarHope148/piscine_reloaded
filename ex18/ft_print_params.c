/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:05:30 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/13 12:38:45 by jcanteau         ###   ########.fr       */
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

int		main(int ac, char **av)
{
	int		i;

	if (ac < 2)
		return (0);
	i = 0;
	while (++i <= ac - 1)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
