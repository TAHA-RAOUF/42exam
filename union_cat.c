#include <unistd.h>

char *ft_strcat(char *dest,char *src)
{
	int i = 0;
	int j = 0;
	while(dest[j])
	{
		j++;
	}
	while(src[i])
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return(dest);
}
int main(int ac ,char **av)
{
	int i;
	int j;
	int l;
	if(ac == 3)
	{
		char *s = ft_strcat(av[1],av[2]);
		i = 0;
		while(s[i])
		{
			j = 0;
			l = 0;
			while(i > j)
			{
				if(s[i] == s[j])
				{
					l = 1;
				}
				j++;
			}
			if(l == 0)
			{
				write(1,&s[i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
}git add count_word.c title.c