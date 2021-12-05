/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_of_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:05:38 by dwulfe            #+#    #+#             */
/*   Updated: 2021/11/30 18:05:40 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_index_of(char *line, int c)
{
	int i;

	i = 0;
	if (!line)
		return (-2);
	while (line[i])
	{
		if ((unsigned char)line[i] - (unsigned char)c == 0)
			return (i);
		i++;
	}
	return (-1);
}
