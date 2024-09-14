#include <unistd.h>

char *rev_print(char * str)
{
	int j = 0;
	while(str[j])
		j++;
	while(j--)
	{	
		write(1,&str[j],1);
	}
	return(str);
}
int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}