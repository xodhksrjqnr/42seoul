#include <unistd.h>

void	print_num(int num, int filter)
{
	char	tmp;

	while (num)
	{
		tmp = num / filter + 48;
		write(1, &tmp, 1);
		num %= filter;
		filter /= 10;
	}
}

int		check_target(int num, int count)
{
	int		check;
	int		location;
	int		count2;

	check = 0;
	location = 10;
	while (count--)
	{
		if (((num / location) % 10 != 8 - check++)
				|| (num / location) % 10 == 0)
		{
			num += location;
			break;
		}
		location *= 10;
	}
	num = num / location;
	count2 = num % 10 + 1;
	while (location / 10)
	{
		num = num * 10 + count2++;
		location /= 10;
	}
	return num - 1;
}

void	ft_print_combn(int n)
{
	int		s_num;
	int		e_num;
	int		count;
	int		filter;

	s_num = (n == 1) ? 1 : 0;
	e_num = 10 - n;
	count = 1;
	filter = 1;
	while (--n)
	{
		s_num = s_num * 10 + s_num % 10 + 1;
		e_num = e_num * 10 + e_num % 10 + 1;
		count++;
		filter *= 10;
	}
	while (s_num != e_num)
	{
		print_num(s_num, filter);
		write(1, ", ", 2);
		if (s_num % 10 == 9)
			s_num = check_target(s_num, count - 1);
		s_num++;
	}
	print_num(s_num, filter);
}
