#include <unistd.h>

int main(int ac ,char **av)
{

	int j = ac - 1;
	while(j > 0)
	{
		int i = 0;
		while(av[j][i])
		{
			write(1,&av[j][i],1);
			i++;
		}
		write(1," ",1);
		j--;
	}
	
}
