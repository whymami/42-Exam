#include "unistd.h"

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i-1);
}

void rev_print(char *str)
{
    int len = ft_strlen(str);
    while (len >= 0)
        write(1, &str[len--], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);
    write(1 ,"\n", 1);
}