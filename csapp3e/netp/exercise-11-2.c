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
    char n[20] = {0};
    strcpy(n, argv[1]);
    
    const char *result = inet_ntop(AF_INET, n, p, 20);
    if(result == NULL){
        perror("inet_ntop error");
        return -1;
    }
    printf("result = %s, p = %s\n", result, p);
    return 0;
}

