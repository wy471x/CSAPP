#include <stdio.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2){
        perror("argc error");
        return -1;
    }
    
    char p[20] = {0};
    unsigned int n;
    sscanf(argv[1], "%x", &n);
    printf("n = %x\n", n); 
    const char *result = inet_ntop(AF_INET, &n, p, 20);
    if(result == NULL){
        perror("inet_ntop error");
        return -1;
    }
    printf("result = %s, p = %s\n", result, p);
    return 0;
}

