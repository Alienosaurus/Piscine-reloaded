
size_t		ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}