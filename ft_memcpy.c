/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:59:46 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 17:14:56 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cont;
	const char	*orig;
	size_t		aux;

	cont = (char *)dst;
	orig = (const char *)src;
	aux = 0;
	if (!dst && !src)
		return (0);
	while (aux < n)
	{
		cont[aux] = (const char)orig[aux];
		aux++;
	}
	return (dst);
}
