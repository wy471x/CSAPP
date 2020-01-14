#include <func.h>
int fun1(unsigned word)
{
    return (int)((word << 24) >> 24);
}
int fun2(unsigned word)
{
    return ((int)word << 24) >> 24;
}
int main()
{
    printf("%x   %x\n",fun1(0x00000076),fun2(0x00000076));
    printf("%x   %x\n",fun1(0x87654321),fun2(0x87654321));
    printf("%x   %x\n",fun1(0x000000c9),fun2(0x000000c9));
    printf("%x   %x\n",fun1(0xedcba987),fun2(0xedcba987));
    return 0;
}

