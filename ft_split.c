/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:15:41 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/21 17:11:27 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	size_t	x;
	size_t	words;

	words = 0;
	x = 0;
	while (s[x])
	{
		if ((s[x] != c && s[x + 1] == c) || (s[x] != c && !s[x + 1]))
			words++;
		x++;
	}
	return (words);
}

static size_t	ft_wlen(char const *s, char c, int i)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_destroyer(char **ptr, int cont)
{
	while (cont-- > 0)
		free(ptr[cont]);
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		ptr[j] = ft_substr(s, i, ft_wlen(s, c, i));
		if (!(ptr[j]))
		{
			ft_destroyer(ptr, j);
			return (0);
		}
		i += (int)ft_wlen(s, c, i);
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

/* int	main(void)
{
	printf("%i\n", ft_countwords("", ' '));
	return (0);
} */
