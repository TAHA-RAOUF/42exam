#include <unistd.h>
#include <stdio.h>


char *ft_title(char *str)
{
	int i = 0;
	
	// ft_lowcase(str);
	while(str[i])
	{
		if(str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		else if((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == 32)
			// && !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			// || (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return(str);
}
int main()
{
	char c[] = "    noX no no no!!!!!";
	printf("%s",ft_title(c));
}