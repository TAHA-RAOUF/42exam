int count_alen(char *str)
{
	int i= 0;
	while(str[i])
	{
		if(str[i] == 'a')
			break;;
		i++;
	}
	return(i);
}
#include <stdio.h>
int main()
{
	printf("%d",count_alen("trrrfjk"));
}