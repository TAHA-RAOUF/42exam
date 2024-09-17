#include <stdio.h>
#include <unistd.h>


int main(int ac ,char **av)
{
	int i = 0;
	int j = 0;
	if(ac == 3 && av[2][1]== '\0')
	{
		while(av[1][i])
		{
			if(av[1][i] == av[2][0])
			{
				j++;
			}
			i++;
		}
		printf("the result is %d",j);
	}
}