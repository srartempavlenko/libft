#include "libft.h"

static char	**ft_freesplit(char **str);
static char	**ft_splitsplit(char **str, const char *s, char c);
static int	ft_countsplit(char const *s, char c);

static char	**ft_freesplit(char **str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		free(*(str + i));
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_splitsplit(char **str, const char *s, char c)
{
	int	count;
	int	stchr;

	count = 0;
	stchr = 1;
	while (*s)
	{
		if (*s == c || stchr)
		{
			stchr = 0;
			while (*s == c)
				s++;
			if (*s)
			{
				str[count] = ft_substr(s, 0, ft_strchr(s, c) - s);
				if (str[count] == NULL)
					return (ft_freesplit(str));
				count++;
			}
		}
		else
			s++;
	}
	str[count] = NULL;
	return (str);
}

static int	ft_countsplit(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (*s != c)
	{
		if (*s)
			count++;
	}
	while (*(s + i))
	{
		if ((*(s + i) == c) && (*(s + i + 1) != c) && (*(s + i + 1)))
			count++;
		i++;
	}
	count += 1;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * ft_countsplit(s, c));
	if (str == NULL)
		return (NULL);
	return (ft_splitsplit(str, s, c));
}
