#include <unistd.h>

int main(int ac,char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while(av[1][i])
			i++;
		i--;
		while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
		{
			i--;
		}
		while(av[1][i - 1] != 32 && i > 0)
		{
			i--;
		}
		while(av[1][i] && (!(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))))
		{
			write(1,&av[1][i],1);
			i++;
		}	
	}
}