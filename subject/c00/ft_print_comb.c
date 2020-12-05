#include <unistd.h>

void	print_num(int num)
{
	char	first;
	char	second;
	char	third;

	first = num / 100 + 48;
	second = (num % 100) / 10 + 48;
	third = num % 10 + 48;
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (num != 789)
		write(1, ", ", 2);
}

void	ft_print_comb(void)//모든 경우를 확인
{
	int		num;

	num = 12;
	while (num < 790)
	{
		if ((num / 100 < (num % 100) / 10) && ((num % 100) / 10 < num % 10))
			convert_num(num);
		num++;
	}
}

void	ft_print_comb_2(void)//특정 조건에서 일정 부분을 건너뜀
{
	int 	num;

	num = 12;
	while (num < 790)
	{
		if (num / 100 > (num % 100) / 10)
			num = (num / 100) * 100 + ((num / 100) + 1) * 10 + ((num / 100) + 1);
		else if ((num % 100) / 10 > num % 10)
			num += (num % 100) / 10;
		else
			convert_num(num);
		num++;
	}
}
