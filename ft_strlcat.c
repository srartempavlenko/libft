#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	j;
	size_t	i;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	j = d;
	i = 0;
	if (dstsize != 0 && dstsize > d)
	{
		while (src[i] && (i < (dstsize - 1)))
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
		return (d + s);
	}
	return (s + dstsize);
}
