#include <stdio.h>

int i = 0;
int j;

char *ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j;

	if(to_find(0) == '\0')
		return(str);
	else 
	{
		j = 0;
		while(to_find(j) && str[i+j] == to_find(j))
		{
			j++;
		}
		if(to_find(j))
		{
			return(&str[i]);
		}
		i++;
	}
	return(0);
}
int main()
{
	char c[] = "hello world"
	char to[] = "wo";
	printf("%s",ft_strstr(c,to));
}