#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if(!s)
		return ;
	write(fs, s, ft_strlen(s));
}

