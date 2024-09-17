#include <unistd.h>
#include <stdio.h>

int st_len(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}

 int main(int ac,char **av)
 {
 	int j = 1;
 	int l;
 		while(j < ac)
 		{
 			l = st_len(av[j]) + 48;
 			write(1,&l,1);
 			write(1,"\n",1);
 			j++;
 		}
 }


//another int main with printf::;

int main(int ac,char **av)
{
	int j = 1;
		while(j < ac)
		{
			printf("%d\n",st_len(av[j]));
			j++;
		}
}
