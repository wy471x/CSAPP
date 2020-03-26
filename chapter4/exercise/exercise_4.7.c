#include <func.h>
int umult_ok(unsigned long x, unsigned long y, unsigned long *dest){
    unsigned char bresult;
    asm("movq %[x], %%rax\n\t"
        "mulq %[y]\n\t"
        "movq %%rax, %[p]\n\t"
        "setae %[b]"
        : [p] "=m" (*dest), [b] "=r" (bresult)
        : [x] "r" (x), [y] "r" (y)
        : "%rax", "%rdx"
        );
    return (int)bresult;
}

