#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(s) + 1;
	tmp = malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	rtn = ft_memcpy(tmp, s, len);
	return (tmp);
}

