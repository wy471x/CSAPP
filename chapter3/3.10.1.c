#include <func.h>

int main()
{
    char c = 'a';
    char *p = &c;
    printf("%p\n",p);
    printf("%p\n",(int*)p + 7);
    printf("%p\n",(int*)(p + 7));
    return 0;
}

