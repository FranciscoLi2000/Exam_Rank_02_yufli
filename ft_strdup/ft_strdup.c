#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int	src_len;
	int	i;

	src_len = ft_strlen(src);
	res = malloc((src_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
