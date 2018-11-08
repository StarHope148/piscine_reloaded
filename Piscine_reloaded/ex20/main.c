/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:34:23 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/08 11:52:55 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(int ac, char **av)
{
	char	*dup;

	(void)ac;
	dup = ft_strdup(av[1]);
	printf("src = \"%s\"\ndup = \"%s\"\n", av[1], dup);
	return (0);
}
