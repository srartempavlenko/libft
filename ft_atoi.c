int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	res;

	i = 0;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\n') ||
		(str[i] == '\r') || (str[i] == '\t') || (str[i] == '\v'))
		i++;
	sig = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (sig * res);
}
