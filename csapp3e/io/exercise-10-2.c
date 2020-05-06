#include "csapp.h"

int main(void)
{
    int fd1, fd2;
    char buf[6] = {0};

    fd1 = Open("foobar.txt", O_RDONLY, 0);
    fd2 = Open("foobar.txt", O_RDONLY, 0);
    Read(fd1, buf, 6);
    Read(fd2, buf, 6);
    printf("buf = %s\n", buf);
    exit(0);
}
