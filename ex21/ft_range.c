/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:57:09 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/08 12:17:56 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min >= max)
		return (NULL);
	if ((range = (int *)malloc(sizeof(int) * (max - min))) == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
}
