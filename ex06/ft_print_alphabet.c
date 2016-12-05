void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a' - 1;
	while (++letter <= 'z')
		ft_putchar(letter);
}
