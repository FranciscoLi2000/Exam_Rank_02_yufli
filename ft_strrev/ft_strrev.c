
char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	tmp;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	i--;
	j = 0;
	while (j < i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
		i--;
	}
	return (str);
}
