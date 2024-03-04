#include "unistd.h"

int check (char c , char *str, int index)
{
	int i = -1;
	while (++i < index)
		if(c == str[i])
			return (0);
	return (1);
}
void unions(char *argv1, char *argv2)
{
	int i = 0;
	int j = -1;
	while (argv1[i])
		i++;
	while (argv1[++j])
		argv1[i++] = argv2[j];
	j = -1;
	while (++j < i && argv1[j])
		if (check(argv1[j], argv1, j))
			write(1, &argv1[j], 1);
}
int	main(int argc, char **argv)
{
	if (argc == 3)
		unions(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}