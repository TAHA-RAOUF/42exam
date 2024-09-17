#include <stdio.h>
#include <unistd.h>

int main(int ac ,char **av)
{
	int i = 0;
	int count = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				count++;
			}
			i++;
		}
		printf("%d",count);
	}
}