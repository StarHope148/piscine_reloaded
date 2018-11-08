/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:34:17 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/06 16:37:02 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);

int		main(int ac, char **av)
{
	int nb;

	(void)ac;
	nb = atoi(av[1]);
	printf("!%d = %d\n", nb, ft_recursive_factorial(nb));
	return (0);
}
