/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:42:17 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/20 14:38:47 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	initial_pos(char const *s, char const *set)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (s[a])
	{
		while (set[b])
		{
			if (s[a] == set[b])
			{
				a++;
				break ;
			}
			b++;
		}
		if (b == ft_strlen(set))
			return (a);
		b = 0;
	}
	return (0);
}

size_t	final_pos(char const *s, char const *set)
{
	size_t	len;
	size_t	x;

	len = ft_strlen(s);
	x = 0;
	while (len > 0)
	{
		while (set[x])
		{
			if (s[len - 1] == set[x])
			{
				len--;
				break ;
			}
			x++;
		}
		if (x == ft_strlen((char *)set))
			return (len);
		x = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		fin;
	int		i;
	char	*rep_str;

	i = 0;
	ini = initial_pos(s1, set);
	fin = final_pos(s1, set);
	rep_str = malloc(sizeof(char) * (fin - ini + 1));
	if (rep_str == NULL)
		return (NULL);
	while (ini < fin)
	{
		rep_str[i] = s1[ini];
		i++;
		ini++;
	}
	rep_str[i] = '\0';
	return (rep_str);
}
