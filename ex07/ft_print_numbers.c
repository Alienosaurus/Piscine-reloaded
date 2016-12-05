void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	digit;

	digit = '1' - 1;
	while (++digit <= '9')
		ft_putchar(digit);
}
