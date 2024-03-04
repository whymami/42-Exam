#include "unistd.h"

int canWriteAll(char *argv1, char *argv2)
{
	int i = 0;
	int j = 0;
	while(argv1[i] && argv2[++j])
	{
		if(argv1[i] == argv2[j])
			i++;
		j++;
	}
	if (argv1[i])
		return 1;
	else
		return 0;
}

void wdmatch(char *argv1, char *argv2)
{
	if(canWriteAll(argv1,argv2) == 1)
		while (*argv1)
			write(1, argv1++, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}