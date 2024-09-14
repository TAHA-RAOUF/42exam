#include <unistd.h>

int main(int ac,char **av)
{
	int i;
	int j;
	int l;

	if(ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			j = 0;
			l = 0;
			while(i > j)
			{
				if(av[1][i] == av[1][j])
				{
					l = 1;
				}
				j++;
			}
			if(l == 0)
			{
				write(1,&av[1][i],1);
			}
			i++;
		}
		int k = 0;
		i = 0;
		while(av[2][k])
		{
			j = 0;
			l = 0;
			while(k > j)
			{
				if(av[2][k] == av[2][j])
				{
					l = 1;
				}
				j++;
			}
			int x = 0;
			if(l == 0)
			{
				while(av[1][i])
				{
					if(av[2][k] == av[1][i])
					{
						x = 1;
					}
					i++;
				}
				if(x == 0)
				{
					write(1,&av[2][k],1);
				}
			}
			i = 0;
			k++;
		}
	}
	write(1,"\n",1);
}