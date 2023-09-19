/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:17:33 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 12:20:02 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dst;
	char	*ptr_src;

	i = 0;
	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (dst == NULL && src == NULL)
		return (0);
	if (ptr_dst > ptr_src)
	{
		while (n-- != 0)
			ptr_dst[n] = ptr_src [n];
	}
	else
	{
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
