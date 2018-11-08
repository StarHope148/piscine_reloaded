/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:52:39 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/08 12:22:03 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[i])
		i++;
	if ((dup = (char *)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		dup[i] = src[i];
	dup[i] = '\0';
	return (dup);
}
