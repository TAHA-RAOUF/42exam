#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}
int len;
int main(int ac,char **av)
{
	if(ac == 2)
	{
		len = ft_strlen(av[1]); 
		while(len--)
		 	write(1,&av[1][len],1);
	}
	write(1,"\n",1);
}