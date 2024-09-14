#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;
	int j = 0;
	char *str;

	while(src[j])
		j++;
	str = malloc((j+ 1) * sizeof(char));
	if(str == 0)
	{
		return(0);
	}
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
int main()
{
	char src[] = "taha";
	char *str = ft_strdup(src);
	 printf("%s\n",str);
}