#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	while(str[i]== '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while(str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return(result * sign);
}
void ft_putnbr(int nb)
{

	if( nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	else 
	{
		ft_putchar((nb % 10) + 48);
	}
}
int main(int ac , char **av)
{
	if (ac > 2)
	{
		int tmp;
		int tmp1;
		int num1 = ft_atoi(av[1]);
		int num2 = ft_atoi(av[2]);
		int num3 = ft_atoi(av[3]);

		tmp = num1;
		num1 = num2;
		num2 = num3;
		num3 = tmp;
		ft_putnbr(num1);
		ft_putchar('\n');
		ft_putnbr(num2);
		ft_putchar('\n');
		ft_putnbr(num3);
	}
}