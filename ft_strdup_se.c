#include "libft.h"
/*
0 0 0 - вернет пустую строку
1 0 0 - скопирует всю строку
1 0 1 - скопирует до символа либо всю строку

1 1 1 - скопирует до символа если это входит в длину(может выделить больше памяти) либо длину если символ за ее пределами
1 1 0 - скопирует определенную длину без учета символа
*/
char	*ft_strndup_SE(const char *s, size_t n, int c)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = n;
	if (!n && !c)
		while (s[len])
			len++;
	else if (!n && c)
		while (s[len] && (s[len] - (unsigned char)c) != 0)
			len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len && s[i] != '\0')
	{
		if (c)
			if (((unsigned char)s[i] - (unsigned char)c) == 0)
				break ;
		str[i] = s[i];
	}
	str[i] = '\0';
	return (str);
}
