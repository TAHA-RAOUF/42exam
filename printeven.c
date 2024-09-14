#include <unistd.h>

void printeven(char *str)
{
	int i= 0;
	while(str[i])
	{
		if(i % 2== 0)
		{
			write(1,&str[i],1);
		}
		i++;
	}
}
int main()
{
	printeven("taha");
}