#include "unistd.h"

int str_len(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

void search_and_replace(char *str, char *search, char *replace)
{
    int i = 0;
    int len = str_len(search);
    while (str[i])
    {
        if (search[0] == str[i] && len == 1)
            str[i] = replace[0];

        i++;
    }
    if (len > 1)
        return ;
    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
    if (argc == 4)
        search_and_replace(argv[1], argv[2], argv[3]);
    write(1, "\n", 1);
}