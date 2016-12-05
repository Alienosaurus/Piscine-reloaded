int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		if (((*f)(tab[j])) == 1)
			i++;
		j++;
	}
	return (j);
}
