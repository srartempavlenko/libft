char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = (char *)c;
	while (*s != a)
		s++;
	if (*s == a)
		return ((char *)s);
	return (NULL);
}
