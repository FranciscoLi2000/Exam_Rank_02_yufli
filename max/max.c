
int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	res;

	if (!tab)
		return (0);
	res = 0;
	i = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
