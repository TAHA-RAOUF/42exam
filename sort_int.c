#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	while(size > 0)
	{
		i = 0;
		while(i < size -1)
		{
			if(tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				
			}
			i++;
		}
		size--;
	}
}
int main()
{
	int tab[] = {1,7,10,6,9,3};
	int size = 5;

	ft_sort_int_tab(tab,size);
	int i = 0;
	while(i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
}