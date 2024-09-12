#include <unistd.h>


int main(int ac , char **av)
{
	int i;
	if(ac != 2)
	{
		write(1,"a",1);
	}
	else 
	{
		while(av[1][i])
		{
			if(av[1][i] == 'a')
			{
				write(1,"a",1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}
