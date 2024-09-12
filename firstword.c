#include <unistd.h>

int	main(int argc, char **av)
{
	int		i;
	i = 0;
	if (argc == 2)
	{
		while (av[1][i] && (av[1][i] == 32 || av[1][i] == '\t'))
		{
			i++;
		}
		while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
		{
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1, "\n", 1);
}
	

