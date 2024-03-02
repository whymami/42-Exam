#include <unistd.h>

int	inter(char *s1, char c, int len) 
{
	int i = 0;
	while (s1[i] && (len == -1 || i < len))
		if(s1[i++] == c)
			return 1;
	return 0;
}

int main(int argc, char **argv) 
{
	int i = -1;
    if (argc == 3)
        while (argv[1][++i])
			if (!inter(argv[1], argv[1][i], i) && inter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
	write(1, "\n", 1);
}
