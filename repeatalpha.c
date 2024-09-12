#include <unistd.h>
#include <stdio.h>

void repeat_alpha(char *str)
{
	int i = 0;
	int repeat = 0;

	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat = str[i] - 'a';
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			repeat = str[i] - 'A';
		}
		while(repeat > 0)
		{
			write(1,&str[i],1);
			repeat--;
		}
		write(1,&str[i],1);
		i++;
	}
}
 int main(int ac,char **av)
 {
 	if(ac == 2)
 	{
 		repeat_alpha(av[1]);	
 	}
 	write(1,"\n",1);

 }
 //without proggrame main
// int main()
// {
// 	char c[] = "abc";
// 	repeat_alpha(c);
// }