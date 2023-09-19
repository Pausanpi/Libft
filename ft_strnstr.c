/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:34:30 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 12:34:02 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack)
	{
		y = 0;
		while (haystack[x] == needle[y] && haystack[x] && x < len)
		{
			x++;
			y++;
		}
		if (!needle[y])
			return ((char *)haystack + x);
		x = (x - y) + 1;
	}
	return (NULL);
}
