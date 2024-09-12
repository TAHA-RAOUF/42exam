#include <unistd.h>

int main(int ac,char **av)
{
	int i = 0;
	int j ;
	int l = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (i > j)
			{
				if(av[1][i] == av[1][j])
				{
					l = 1;
				}
				j++;
			}
			if(l == 0)
			{
				int k = 0;
				while (av[2][k])
				{
					if(av[2][k] == av[1][i])
					{
						write(1,&av[1][i],1);
						break;
					}
					k++;
				}
			}
			i++;
		}
		write(1,"\n",1);
	}
}