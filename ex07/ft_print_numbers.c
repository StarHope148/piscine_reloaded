/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:03:30 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/06 14:15:27 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
		ft_putchar(i++);
}
