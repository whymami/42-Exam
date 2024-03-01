#include "unistd.h"

void rot_13 (char *str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
            str[i] += 1;
        else if (str[i] == 'z')
            str[i] = 'a';
        else if (str[i] == 'Z')
            str[i] = 'A';
        write(1, &str[i++], 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rot_13(argv[1]);
    write(1, "\n", 1);
}