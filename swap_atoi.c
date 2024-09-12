#include <unistd.h>

int atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while(str[i] && (str[i]>= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return(result * sign);
}
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int nb)
{
	if ( nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + 48);
}
int main(int ac ,char **av)
{
	if(ac > 2)
	{
		int tmp;
		int num1 = atoi(av[1]);
		int num2 = atoi(av[2]);
		
		tmp = num1;
		num1 = num2;
		num2 = tmp;
		ft_putnbr(num1);
		ft_putchar('\n');
		ft_putnbr(num2);
	}
}