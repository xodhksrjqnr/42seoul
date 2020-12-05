void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp;
	int		count;

	count = 0;
	while (count < size / 2)
	{
		tmp = *(tab + count);
		*(tab + count) = *(tab + size - count - 1);
		*(tab + size - count - 1) = tmp;
		count++;
	}
}
