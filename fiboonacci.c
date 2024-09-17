#include <unistd.h>

int ft_atoi(const char *str)
{
	int sign = 1;
	int i = 0;
	int result  = 0;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if(str[i] == '+')
	{
		i++;
	}
	while( str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return(result * sign);
}
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int main(int ac, char **av)
{
	int num;
	int x;
	if(ac == 2)
	{
		num = ft_atoi(av[1]);
		x = ft_fibonacci(num);
		ft_putnbr(x);
	}
}