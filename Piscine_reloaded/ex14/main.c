/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:46:03 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/06 16:49:44 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

int		main(int ac, char **av)
{
	int		nb;

	(void)ac;
	nb = atoi(av[1]);
	printf("√%d = %d (0 si racine la racine n'est pas entiere)\n",
			nb, ft_sqrt(nb));
	return (0);
}
