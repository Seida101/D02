#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_numbers(void)
{
	char s;
	s = '0';
	while(s <= '9')
	{
		ft_putchar(s);
				s++;
	}
	ft_putchar('\n');
}
