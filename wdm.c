#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j = 0;
	int l = 0;
	if (ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			//j = 0;
			while(j < i)
			{
				if(av[1][i] == av[2][j])
				{
					j++;
					break;
				}
				j++;
			}
			i++;
		}
		if(av[1][j] == '\0')
		{
			l = 0;
			while(av[1][l])
			{
				write(1,&av[1][l],1);
				l++;
			}
		}
	}
	write(1,"\n",1);
}