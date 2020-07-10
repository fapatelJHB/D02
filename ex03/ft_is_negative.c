#include<stdio.h>
#include <unistd.h>

void ft_putchar (char i)
{
	write(1, &i, 1);
}

void ft_is_negative (int n)
{
		if  (n > 0 || n == '\0')
		{
			ft_putchar('P');
		}
		else if (n < 0) 
		{
			ft_putchar('N');
		}
}

int main()
{

	ft_is_negative(0);
	return (0);
}
