/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:07:23 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/19 12:02:02 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	tmp;

	tmp = 0;
	while ((s1[tmp] != '\0') && (s2[tmp] != '\0') && (tmp < n))
	{
		if (s1[tmp] != s2[tmp])
			return (1);
		tmp++;
	}
	return (0);
}
