
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]); // 返回指向 s1 中这个字符的指针
			j++;
		}
		i++;
	}
	return (NULL);
}
