#include "stdio.h"
#include "stdlib.h"

void do_op(int nbr, char op, int nbr2)
{
	if (op == '+')
		printf("%d", nbr + nbr2);
	else if (op == '-')
		printf("%d", nbr - nbr2);
	else if (op == '*')
		printf("%d", nbr * nbr2);
	else if (op == '/')
		printf("%d", nbr / nbr2);
	else if (op == '%')
		printf("%d", nbr % nbr2);
	printf("\n");
}

int main(int argc, char **argv)
{
	if (argc == 4)
		do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	else
		printf("\n");
}