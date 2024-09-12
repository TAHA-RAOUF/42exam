#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int start;
	int end;

	start = 0;
	end = size - 1;
	while(start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}
int main()
{
	int tab[] = {1,2,3,4,5};
	int i;
	int size = 5;
	ft_rev_int_tab(tab,size);
	while(i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
}