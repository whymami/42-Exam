#include "unistd.h"

void rot_13 (char *str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            str[i] += 13;
        else if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
            str[i] -= 13;
        write(1, &str[i++], 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rot_13(argv[1]);
    write(1, "\n", 1);
}