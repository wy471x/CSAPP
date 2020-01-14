#include <func.h>
int strlonger(char* s,char *t)
{
    return ((signed)strlen(s) - (signed)strlen(t)) > 0;
}
int main()
{
    char str1[] = "helloooooo";
    char str2[] = "world!!!";
    printf("%d\n",strlonger(str1,str2));
    return 0;
}

