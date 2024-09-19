#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] || s2[i])
	{
		if(s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}
		i++;
	}
	return(0);
}
int main()
{
	char c[] = "tada";
	char d[] = "taad";
	printf("%d",ft_strcmp(c,d));
}