#include "libft.h"

void	ft_putendl_fd(char *s, int f)
{
	write(fd, s, ft_strlen(s));
	write(fd, '\n', 1);
}
