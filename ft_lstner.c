#include "libft.h"

t_list	*ft_lstnw(void *content)
{
    t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}