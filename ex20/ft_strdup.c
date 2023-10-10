/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:16:15 by mvan-pee          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:10 by mvan-pee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	char	*start_dup;

	if (!str)
		return (0);
	dup = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dup)
		return (0);
	start_dup = dup;
	while (*str)
		*dup++ = *str++;
	*dup = '\0';
	return (start_dup);
}
