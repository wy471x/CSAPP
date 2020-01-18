#include <func.h>
long rsum(long *start, long count)
{
    if(count < 0)
        return 0;
    return *start + rsum(start+1, count-1);
}

int main(void)
{
    long array[4] = {1,2,3,4};
    long count = 3;
    printf("sum=%ld\n", rsum(array, count));
    return 0;
}

