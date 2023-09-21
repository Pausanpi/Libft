#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	tmp;

	if (!lst || !del)
		return ;
	tmp = (*lst)->next;
	while (tmp)
	{
		del((*lst)->content);
		*lst = tmp;
		tmp = (*lst)->next;
	}
	del((*lst)->content);
	*lst = NULL;
}