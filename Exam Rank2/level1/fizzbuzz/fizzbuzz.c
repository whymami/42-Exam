#include "unistd.h"

void putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
	if (n <= 9)
		putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void ft_fizzbuzz(int i)
{
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);	
		i++;	
	}
}

int main(void)
{
	ft_fizzbuzz(1);
}