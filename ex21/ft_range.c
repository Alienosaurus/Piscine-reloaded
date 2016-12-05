#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*int_tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		int_tab = (int *)malloc(sizeof(int) * (max - min));
		while (i < max)
		{
			int_tab[i] = min + i;
			i++;
		}
		return (int_tab);
	}
}
