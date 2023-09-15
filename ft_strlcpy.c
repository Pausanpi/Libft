/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:16:40 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/14 11:27:31 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	tmp;
	size_t	cont;

	tmp = 0;
	cont = 0;
	while (src[cont] != '\0')
		cont++;
	if (dstsize != 0)
	{
		while (src[tmp] != '\0' && tmp < dstsize - 1)
		{
			dst[tmp] = src[tmp];
			tmp++;
		}
		dst[tmp] = '\0';
	}
	return (cont);
}
