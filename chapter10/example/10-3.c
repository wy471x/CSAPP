#include "../../csapp3e/include/csapp.h"

int main(void)
{
    char c;

    while(read(STDIN_FILENO, &c, 1) != 0)
        write(STDOUT_FILENO, &c, 1);

    return 0;
}

