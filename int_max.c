#include <stdio.h>

int	max(int *tab,unsigned int len)
{
	unsigned int i = 0;
	int max = 0;

	if(len == 0)
	{
		return(0);
	}
	while(i < len)
	{
		if(tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return(max);
}
int main()
{
	int tab[] = {1,10,3,4,9};
	int size = 0;
	printf("%d",max(tab,size));
}