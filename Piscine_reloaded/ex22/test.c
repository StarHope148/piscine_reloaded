/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:24:21 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/08 14:21:16 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ABS(Value) ((Value >= 0) ? (Value) : (-Value))

int		main(void)
{
	int		a;
	int		b;

	a = -215;
	b = 5229;

	printf("ABS(a) = %d et ABS(b) = %d\n", ABS(a), ABS(b));
	return (0);
}