#include<stdio.h>
#include <math.h>
int main()
{
 float side, area;
 scanf("%f", &side);
 area=(sqrt(3)/4)*(side*side);
 printf("Area of equilateral triangle= %.2f", area);
return 0;
}
