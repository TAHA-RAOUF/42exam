#include <unistd.h>

int main(int ac,char **av)
{
	int i;
	if (ac > 1)
	{
		while(av[ac - 1][i])
		{
			write(1,&av[ac - 1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}