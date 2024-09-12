#include <stdio.h>
#include <unistd.h>

int occ_a(char *str)
{
	int i = 0;
	int j = 0;
	while(str[i])
	{
		if(	str[i] == 'a')
		{
			j++;
		}
		i++;
	}
	return(j);
}
int main(int ac,char **av)
{
	char c[] = "taaaha";
	printf("%d",occ_a(c));
}