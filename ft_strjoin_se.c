/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_se.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:16:09 by dwulfe            #+#    #+#             */
/*   Updated: 2022/01/25 16:33:44 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_se(char *s1, char *s2)
{
	if (s1 == NULL && s2)
		return (ft_strdup(s2));
	else if (s2 == NULL && s1)
		return (ft_strdup(s1));
	else if (s1 && s2)
		ft_strjoin(s1, s2);
	return (NULL);
}