/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:49:58 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 17:55:02 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				aux;
	unsigned char	*tmp;

	aux = 0;
	tmp = (unsigned char *)s;
	while (tmp[aux] != '\0')
	{
		if (tmp[aux] == (unsigned char)c)
			return ((char *)&s[aux]);
		aux++;
	}
	if (c == '\0' || c == 1024)
		return ((char *)&s[aux]);
	return (NULL);
}
