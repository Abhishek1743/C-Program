#include <stdio.h>
#include <math.h>
int main()
{
    int base,exponent,result;
    scanf("%d%d",&base,&exponent);
    result=pow(base, exponent);
    printf("Result: %d^%d = %d\n",base,exponent,result);
    return 0;
}
