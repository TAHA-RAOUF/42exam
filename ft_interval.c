#include <unistd.h>

int main(int ac , char **av)
{
	int i = 0;
	int index;
	if(ac == 2)
	{
		while(av[1][i])
		{
			index = i + 1;
			if(index % 3 == 0 && index % 5 == 0 )
			{
				write(1,"5",1);
			}
			else if(index % 3 == 0 )
			{
				write(1,"5",1);
			}
			else if(index % 5 == 0 )
			{
				write(1,"3",1);
			}
			else
			{
				write(1,&av[1][i],1);
			}
			i++;
		}
		write(1,"\n",1);
	}
}