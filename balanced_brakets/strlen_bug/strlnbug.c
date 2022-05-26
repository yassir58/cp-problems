#include <stdio.h>
#include <unistd.h>




unsigned long strinlen (char *str)
{
	char *tmp;

	tmp = str;
	while (tmp++)
		printf ("%s \n", tmp);
	return (0);
}



int main (int argc, char *argv[])
{
	char *str;

	str = argv[argc];

}
