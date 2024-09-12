#include <stdio.h>


int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}
	return(i);
}
char *ft_strrev(char *str)
{
	int tmp;
	int i  = 0;
	int end = ft_strlen(str) - 1 ;

	while(str[i])
	{
		if(i < end )
		{
			tmp = str[i];
			str[i] = str[end];
			str[end] = tmp;
		}
		i++;
		end--;
	}
	return(str);
}
int main()
{
	char c[] = "taha";
	printf("%s",ft_strrev(c));
}
