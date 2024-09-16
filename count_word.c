#include <stdio.h>


int count_word(char *str)
{
	int i = 0;
	int j = 0;

	while(str[i])
	{
		while (str[i] == 32)
		{
			i++;
		}
		if(str[i])
		{
			j++;
		}
		while(str[i] && str[i] != 32)
		{
			i++;
		}			
	}
	return(j);
}
int main()
{
	char c[] = "    t    aha is a good man ";
	printf("%i",count_word(c));
}