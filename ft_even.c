#include <unistd.h>

void pointr(int *ptr)
{
	*ptr = (*ptr) * 2;
}

void ft_putchar(char c)
{
	write(1, &c,1);
}
void ft_putnbr(int nb)
{
	int i = 0;
	if (nb > 9)
	{
		ft_putnbr(nb / 10 );
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
int main()
{
	int i = 0;
	int c ;
	while( i <= 100)
	{
		if(i %2 == 0)
		{
			c = i;
			pointr(&c);
			ft_putnbr(c);
		}
		else if(i % 2 == 1)
		{
			
			write(1,"odd",3);
		}
		
		else {
			ft_putnbr(i);
		}
		i++;
		write(1,"\n",1);

	}
	
}