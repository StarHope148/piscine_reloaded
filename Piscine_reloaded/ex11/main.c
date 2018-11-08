/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:55:24 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/06 15:00:40 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		a;
	int		b;
	int		*div;
	int		*mod;
	int		resdiv;
	int		resmod;

	a = 42;
	b = 10;
	div = &resdiv;
	mod = &resmod;
	ft_div_mod(a, b, div, mod);
	printf("*div = %d\t*mod = %d\n", *div, *mod);
	return (0);
}
