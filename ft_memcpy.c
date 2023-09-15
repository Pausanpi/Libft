/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:59:46 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/14 15:42:29 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cont;
	unsigned char	*orig;
	size_t			aux;

	cont = (unsigned char *)dst;
	orig = (unsigned char *)src;
	aux = 0;
	while (aux < n)
	{
		cont[n] = orig[n];
		aux++;
	}
	return (cont);
}
