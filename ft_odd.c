#include <unistd.h>

void print_even(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(i % 2 == 0)
		{
			write(1,&str[i],1);
		}
		i++;
	}
}
int main(int ac,char **av)
{
	int i = 0;
	if(ac == 2)
	{
		print_even(av[1]);
	}
	write(1,"\n",1);
}