#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int repeat = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				repeat = av[1][i] - 'a';
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				repeat = av[1][i] - 'A';
			}
			while(repeat > 0)
			{
				write(1,&av[1][i],1);
				repeat--;
			}
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}