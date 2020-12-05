char	*ft_strcpy(char *dest, char *src)
{
	char	*save;

	save = dest;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return save;
}
