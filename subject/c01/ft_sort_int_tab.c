void	ft_sort_int_tab(int *tab, int size)
{
	int		count;
	int		tmp;

	while (size--)
	{
		count = 0;
		while (count < size)
		{
			if (*(tab + count) > *(tab + count + 1))
			{
				tmp = *(tab + count);
				*(tab + count) = *(tab + count + 1);
				*(tab + count + 1) = tmp;
			}
			count++;
		}
	}
}
