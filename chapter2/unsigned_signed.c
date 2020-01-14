#include <func.h>

int main()
{
    int tx,ty = -10;
    unsigned ux = 10,uy;
    tx = (int)ux;
    uy = (unsigned)ty;
    printf("%d\n",tx);
    printf("%u\n",uy);
    int x = -1;
    unsigned u = 2147483648;
    printf("x = %u = %d\n",x,x);
    printf("x = %u = %d\n",u,u);
    return 0;
}

