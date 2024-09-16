#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
int is_space(char c)
{
	if( c == ' ')
		return(1);
	return(0);
}

int isstring(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		if(!is_space(str[i]))
		{
			count++;
		}
		i++;
	}
	return(count);
}
char *skip_space(char *str)
{
	int i = 0;
	int j = 0;
	printf("%d\n",isstring(str));
	if(str[i] == '\0')
	{
		return(str);
	}
	char *s2 = malloc(sizeof(char) * isstring(str) + 1);
	if (!s2)
		return(NULL);
	while(str[i])
	{
		if(!is_space(str[i]))
			s2[j++] = str[i];
		i++;
	}
	s2[j] = '\0';
	return(s2);
}
int main()
{
	char c[] = "   yf      h   b  gs      hb ";
	char *s = skip_space(c);
	printf("%s",s);
}