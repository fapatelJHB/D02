#include<stdio.h>
#include <unistd.h>

void ft_putchar(char i)
{
	write(1, &i, 1);
}
void ft_print_numbers(void)
{
	int i;
	i = '0';
		while (i <= '9')
		{
			ft_putchar(i);
			i = i + 1;
		}
}

int main()
{
	ft_print_numbers ();
	return (0);
}



