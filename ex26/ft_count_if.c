/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:48:23 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/13 11:48:49 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f) (char *))
{
	int	i;
	int	total;

	i = -1;
	total = 0;
	while (tab[++i])
		if (f(tab[i]) == 1)
			total++;
	return (total);
}
