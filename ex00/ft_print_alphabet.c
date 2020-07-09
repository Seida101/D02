#include <unistd.h>

void ft_putchar(char c)

{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
char s;
s = 'a';
while (s <='z')
	{
		ft_putchar(s);
				s++;
	}
}
