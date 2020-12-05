#include <unistd.h>

void	print_num(int num)
{
	char	result;

	if (num > 9)
		print_num(num / 10);
	result = num % 10 + 48;
	write(1, &result, 1);
}

void	ft_putnbr(int nb)
{
	int		count;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		print_num(nb);
	}
}
