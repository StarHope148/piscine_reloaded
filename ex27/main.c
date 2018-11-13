/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:49:56 by jcanteau          #+#    #+#             */
/*   Updated: 2018/11/13 11:50:34 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buffer[BUFFER_SIZE + 1];

	if (ac != 2)
	{
		if (ac < 2)
			write(1, "File name missing.\n", 19);
		else if (ac > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	if ((fd = open(av[1], O_RDONLY)) == -1)
		return (1);
	while ((ret = read(fd, buffer, BUFFER_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
