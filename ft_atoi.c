
#include <stdio.h>

int ft_atoi(const char *str)
{
	int sign = 1;
	int i = 0;
	int result  = 0;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if(str[i] == '+')
	{
		i++;
	}
	while( str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return(result * sign);
}
int main()
{
	char c[] = "     \n\n\v\f\r\t --52-634AAAgreghrsth";
	printf("%i",ft_atoi(c));
}
