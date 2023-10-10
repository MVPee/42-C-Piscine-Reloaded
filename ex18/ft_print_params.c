/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:01:23 by mvan-pee          #+#    #+#             */
/*   Updated: 2023/10/10 13:06:56 by mvan-pee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (0);
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
