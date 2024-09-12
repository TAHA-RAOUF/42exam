
#include <unistd.h>
int ft_strlen(char *str)
{
	int i =  0;
	while(str[i])
	{
		i++;
	}
	return(i);
}
int main(int ac ,char **av)
{
	int len = 0;
	len = ft_strlen(av[1]);
	while(len--)
	{
		write(1,&av[1][len],1);
	}

}