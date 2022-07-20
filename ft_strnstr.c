#include	"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;	

	if (!*(needle))
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((neddle[j]) && (haystack[i + j] == neddle[j]) && ((i + j) < len))
			j++;
		if (!neddle[j])
			return ((char)haystack[i]);
		i++;
	}
	return (NULL);
}
