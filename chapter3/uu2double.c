#include <func.h>
double uu2double(unsigned word0,unsigned word1){
    union{
        double d;
        unsigned u[2];
    }temp;
    temp.u[0] = word0;
    temp.u[1] = word1;
    return temp.d;
}
int main()
{
    printf("%x\n",uu2double(123,456));
    return 0;
}

