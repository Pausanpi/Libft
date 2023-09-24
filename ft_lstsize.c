/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:34:23 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/22 09:46:40 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	x;

	if (!lst)
		return (0);
	x = 1;
	while (lst->next)
	{
		x++;
		lst = lst->next;
	}
	return (x);
}
