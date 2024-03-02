#include "unistd.h"

void snake_to_camel(char *str)
{
	int i = 0;
	int flag = 0;
	while(str[i])
	{
		if (str[i] == '_')
		{
			i++;
			flag = 1;
		}
		if (flag)
		{
			str[i] -= 32;
			flag = 0;
		}
		write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	else
		write(1, "\n", 1);
}