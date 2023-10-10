/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:04:45 by mvan-pee          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:30 by mvan-pee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int ac, char **av)
{
	char	buffer[32768];
	int		fd;

	if (ac == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd != 3)
	{
		ft_putstr(2, "Cannot read file.\n");
		return (0);
	}
	read(fd, buffer, 32768);
	ft_putstr(1, buffer);
	return (0);
}
