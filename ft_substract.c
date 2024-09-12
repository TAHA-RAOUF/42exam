#include <stdio.h>

void ft_substract(int a ,int *ptr)
{
	*ptr = (*ptr) - a;
}
int main()
{
	int n = 5;
	int p = 10;
	ft_substract(n,&p);
	printf("%d",p);
}