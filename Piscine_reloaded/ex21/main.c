/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:59:12 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/08 12:17:57 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(int ac,char **av)
{
	int		*tab;
	int		i;

	(void)ac;
	i = -1;
	tab = ft_range(atoi(av[1]), atoi(av[2]));
	printf("min = %d et max = %d\n", atoi(av[1]), atoi(av[2]));
	while (++i < atoi(av[2]) - atoi(av[1]))
		printf("[%d] ", tab[i]);
	return (0);
}
