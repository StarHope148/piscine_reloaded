/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:41:17 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/06 14:48:43 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int var1;
	int var2;
	int *a;
	int *b;

	var1 = 42;
	var2 = 12345;
	a = &var1;
	b = &var2;
	printf("var1 = %d\tvar2 = %d\n", var1, var2);
	ft_swap(a, b);
	printf("var1 = %d\tvar2 = %d\n", var1, var2);
	return (0);
}
