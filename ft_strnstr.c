/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:34:30 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/20 09:45:54 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	tmp;
	char	*orig;
	char	*str;

	tmp = -1;
	orig = (char *)haystack;
	str = (char *)needle;
	while (tmp++ < len)
	{
		if (orig[tmp] == str[tmp])
			return (&orig[tmp]);
	}
	return (0);
}
