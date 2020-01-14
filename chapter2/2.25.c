#include <func.h>
float sum_elements(float a[],unsigned length)
{
    unsigned int i;
    float result = 0;
    for(i = 0;i <= length-1;++i)
    {
        result += a[i];
    }
    return result;
}
int main()
{
    float a[4] = {1,2,3,4};
    printf("%f\n",sum_elements(a,0));
    return 0;
}

