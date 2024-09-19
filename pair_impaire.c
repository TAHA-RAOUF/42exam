#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int nb)
{
	if ( nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + 48);
}
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

int main()
{
	int i = 0;
	int  j = 0;
	char **str;
	char *x = "pair";
	char *z = "impaire";
	while(str[i])
	{
		j = 0;
		while(i < 9)
		{
			if( i % 2 == 0)
				str[i][j] = x[j];
			else 
				str[i][j] = z[j];
			j++;
		}
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	i = 0;
	while(i < 9)
	{
		ft_putstr(str[i]);
		i++;
	}
}