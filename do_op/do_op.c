#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	do_op(int n1, char simb, int n2)
{
	int	res;

	res = 0;
	switch (simb)
	{
		case '+':
			res = n1 + n2;
			break ;
		case '-':
			res = n1 - n2;
			break ;
		case '*':
			res = n1 * n2;
			break ;
		case '/':
			if (n2 == 0)
				break ;
			res = n1 / n2;
			break ;
		case '%':
			if (n2 == 0)
				break ;
			res = n1 % n2;
			break ;
		default:
			break ;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%i", do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
	printf("\n");
	return (0);
}
