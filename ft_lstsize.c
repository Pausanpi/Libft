#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	x;

	if (!lst)
		return (NULL);
	x = 1;
	while (lst->next)
	{
		x++;
		lst = lst->next;
	}
	return (x);
}