/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:31:10 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/15 11:15:07 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	tmp;
	int	sign;
	int	aux;

	tmp = 0;
	sign = 1;
	aux = 0;
	while ((str[tmp] >= '\t' && str[tmp] <= '\r') || str[tmp] == ' ')
		tmp++;
	if (str[tmp] == '-')
	{
		sign = -1;
		tmp++;
	}
	else if (str[tmp] == '+')
		tmp++;
	while (str[tmp] >= '0' && str[tmp] <= '9')
	{
		aux = (aux * 10) + (str[tmp] - '0');
		tmp++;
	}
	return (aux * sign);
}
