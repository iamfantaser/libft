/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:05:24 by dwulfe            #+#    #+#             */
/*   Updated: 2021/11/30 20:05:51 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrstr_del(char **dst, int s_counter)
{
	while (s_counter > 0)
	{
		s_counter--;
		free((void *)dst[s_counter]);
	}
	free(dst);
	return (NULL);
}
