#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 0;
			while (j < str[i] - 64)
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0;
			while (j < str[i] - 96)
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
