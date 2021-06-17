/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwulfe <dwulfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:37:20 by dwulfe            #+#    #+#             */
/*   Updated: 2021/04/22 16:36:34 by dwulfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)haystack;
	if (needle[0] == '\0' || haystack == needle)
		return ((char *)haystack);
	while (i < len)
	{
		j = 0;
		while (ptr[i + j] != '\0' && i + j < len
			&& (ptr[i + j] - needle[j]) == 0)
		{
			if (needle[j + 1] == '\0')
				return (&ptr[i]);
			j++;
		}
		i++;
	}
	return ((void *)0);
}
