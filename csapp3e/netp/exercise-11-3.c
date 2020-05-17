#include <stdio.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc < 2){
        perror("argc error");
        return -1;
    }
    
    char p[20] = {0};
    int n = 0;
    strcpy(p, argv[1]);
    
    int ret = inet_pton(AF_INET, p, &n);
    if(ret == 0){
        perror("src argument error in inet_pton");
        return -1;
    }else if(ret == -1){
        perror("inet_pton error");
        return -1;
    }
    printf("n = %x\n", n);
    return 0;
}

