/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:34:49 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 12:34:33 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(s) + 1;
	tmp = malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	tmp = ft_memcpy(tmp, s, len);
	return (tmp);
}
