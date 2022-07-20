#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	size_t	i;

	a = (char *)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
