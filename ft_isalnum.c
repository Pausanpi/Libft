/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:39:27 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/14 10:55:23 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//mirar como usar las funciones de ft_isalpha y fT_isdigit sin añadirlas
//completamente

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 0 || ft_isdigit(c) == 0)
		return (0);
	return (c);
}
