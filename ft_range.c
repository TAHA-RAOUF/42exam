#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start,int end)
{
	int i = 0;
	int x;
	int *tab;

	if(start > end)
	{
		i = start - end;
	}
	else
	{
		i = end - start;
	}
	tab = malloc((i + 1) * sizeof(int));
	x = 0;
	while(end >= start)
	{
		tab[x] = start;
		x++;
		start++; 
	}
	while(end <= start)
	{
		tab[x] = start;
		x++;
		start++; 
	}

	return(tab);
}
int main()
{
	int *tab = ft_range(2,-3);
	
	int i = 0;
	while(i <= 4)
	{
		printf("%d",tab[i]);
		i++;
	}
}
