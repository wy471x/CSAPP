#include <func.h>
typedef union{
    struct {
        long u;
        short v;
        char w;
    }t1;
    struct {
        long a[2];
        char *p;
    } t2;
}u_type;
#define type int

void get(u_type *up, type *dest){
   *dest = up->t2.a[up->t1.u];
}
int main()
{
    u_type p1 = { { 3, 1, 'c'} };
    int q;
    get(&p1, &q);
    return 0;
}

