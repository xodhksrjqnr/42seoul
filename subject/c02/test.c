#include <stdio.h>
#include <string.h>
#include "ft_strcpy.h"

int		main(int argc, char **argv)
{
	char	arr[3] = "";
	char	arr2[3] = "";
	char	*tmp;
	char	*tmp2;

	argv++;
	if (argc == 2)
	{
		tmp = *argv;
		printf("%s ", strcpy(arr, *argv));
		printf("%s\n", ft_strcpy(arr2, tmp));
	}
	else if (argc == 3)
	{
		tmp = *argv;
		tmp2 = *(argv + 1);
		printf("%s ", strcpy(*argv, *(argv + 1)));
		printf("%s\n", ft_strcpy(tmp));
	}
	return (0);
}
