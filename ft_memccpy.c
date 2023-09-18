/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:45:45 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/18 15:51:38 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int	aux;

	aux = 0;
	while (aux < (int)n)
	{
		((char *)dst)[aux] = ((char *)src)[aux];
		aux++;
		if (((char *)src)[aux - 1] == c)
			return (dst + aux);
	}
	return (NULL);
}
