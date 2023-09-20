/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:30:07 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/20 17:51:32 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_num(long int n)
{
	int	a;

	a = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	long int	tmp;
	char		*str;
	int			aux;

	tmp = n;
	if (tmp < 0)
		tmp *= -1;
	aux = size_num(tmp);
	if (n < 0)
		aux++;
	str = malloc(sizeof(char) * (aux + 1));
	if (!str)
		return (NULL);
	str[aux--] = '\0';
	while (aux >= 0)
	{
		str[aux--] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(-5859));
	return (0);
}*/
