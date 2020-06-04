/*
 * adder.c - a minimal CGI program that adds two numbers together
 */
/* $begin adder */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getNumberFromString(char *str);

int main(int argc, char **argv) {
    char *buf, *p;
    //char /*arg1[MAXLINE], arg2[MAXLINE],*/ content[MAXLINE];
    int n1=0, n2=0;
    buf = (char *)malloc(1024);
    strcpy(buf, argv[1]);
    /* Extract the two arguments */
    //if ((buf = getenv("QUERY_STRING")) != NULL) {
    p = strchr(buf, '?');
    *p = '\0';
    //strcpy(arg1, buf);
    //strcpy(arg2, p+1);
    // ---- added extra code by dunk start ----
    //if(argc != 2){
    //    perror("argc error");
    //    exit(-1);
    //}
    //char buf[100] = {0};
    //strcpy(buf, argv[1]);
    //char *p;
    //p = strchr(buf, '&');
    //*p = '\0';
    n1 = getNumberFromString(buf);
    n2 = getNumberFromString(p + 1);
    printf("n1 = %d, n2 = %d\n", n1, n2);
    // ---- added extra code by dunk end ----
    //n1 = atoi(arg1);
    //n2 = atoi(arg2);
    //}

    /* Make the response body */
    // sprintf(content, "Welcome to add.com: ");
    // sprintf(content, "%sTHE Internet addition portal.\r\n<p>", content);
    // sprintf(content, "%sThe answer is: %d + %d = %d\r\n<p>", 
    //         content, n1, n2, n1 + n2);
    // sprintf(content, "%sThanks for visiting!\r\n", content);

    // /* Generate the HTTP response */
    // printf("Connection: close\r\n");
    // printf("Content-length: %d\r\n", (int)strlen(content));
    // printf("Content-type: text/html\r\n\r\n");
    // printf("%s", content);
    // fflush(stdout);

    exit(0);
}
/* $end adder */

/* $start getNumberFromString */
int getNumberFromString(char *str)
{
    if(!str)
        perror("valid string");

    printf("str = %s\n", str);
    int value = 0;
    while(*str){
        if((*str >= '0') && (*str <= '9')) {
            value = value * 10 + (*str - '0');
        }
        str++;
    }
    printf("value=%d\n", value);
    return value;
}
/* $end getNumberFromString */
