/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:07:09 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 12:01:51 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest2;
	size_t	src2;
	size_t	tmp;

	dest2 = ft_strlen(dst);
	src2 = ft_strlen(src);
	tmp = 0;
	if (dstsize < dest2 + 1)
		return (dstsize + src2);
	while (src[tmp] != '\0' && dest2 + 1 + tmp < dstsize)
	{
		dst[dest2 + tmp] = src[tmp];
		tmp++;
	}
	dst[dest2 + tmp] = '\0';
	return (dest2 + src2);
}
