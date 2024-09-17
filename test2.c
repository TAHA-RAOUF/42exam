
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_ptr(int *ptr)
{
	*ptr *= 2;
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
int main()
{
	int i = 9;
	while(i >= 0)
	{

		if(i % 2 == 0)
		{
			int c = i;
			ft_ptr(&c);	
			ft_putnbr(c);
			
		}
		else{
			ft_putnbr(i);
		}
		write(1,"\n",1);
		i--;
	}
	
}