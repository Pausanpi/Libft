/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:30:55 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 12:32:24 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cont;
	unsigned char	*ptr_s;

	cont = 0;
	ptr_s = (unsigned char *)s;
	while (cont < n)
	{
		if (ptr_s[cont] == (unsigned char)c)
			return (&ptr_s[cont]);
		cont++;
	}
	return (0);
}
