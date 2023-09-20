/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:36:56 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/20 08:59:08 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*igual que el strchr pero te da la última coincidencia*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	tmp;

	tmp = ft_strlen(s) + 1;
	while (tmp--)
	{	
		if (s[tmp] == (char) c)
			return ((char *)&s[tmp]);
	}
	return (NULL);
}
