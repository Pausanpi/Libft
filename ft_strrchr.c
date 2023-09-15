/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:36:56 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/15 12:28:41 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*igual que el strchr pero te da la última coincidencia*/

char	*ft_strrchr(const char *s, int c)
{
	char	*ult;

	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == (unsigned char) c)
			ult = (char *)s;
		s++;
	}
	return (ult);
}
