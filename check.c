
#include <stdio.h>
#include <unistd.h>

void  Ft_check(char *str)
{
	int i; 
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else {
			write(1,&str[i],1);
		}
		i++;
	}
	
}
// int main(int ac, char **av)
// {
// 	for (int i = 1; i < ac; i++)
// 		{
// 			Ft_check(av[i]);
// 		}
// }
int main(int ac,char **av)
{
	int i = 1;
	while(i < ac)
	{
		Ft_check(av[i]);
		i++;
	}
}