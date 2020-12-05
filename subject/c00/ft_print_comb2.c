#include <unistd.h>

void	print_num(int h_num, int t_num)
{
	char	num_arr[5];
	int		count;

	count = 0;
	num_arr[0] = h_num / 10 + 48;
	num_arr[1] = h_num % 10 + 48;
	num_arr[2] = ' ';
	num_arr[3] = t_num / 10 + 48;
	num_arr[4] = t_num % 10 + 48;
	while (count < 5)
		write(1, &num_arr[count++], 1);
	if (!(h_num == 98 && t_num == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		head_num;
	int		tail_num;

	head_num = 0;
	tail_num = 1;
	while (head_num != 99)
	{
		print_num(head_num, tail_num);
		if (tail_num == 99)
		{
			head_num++;
			tail_num = head_num;
		}
		tail_num++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
