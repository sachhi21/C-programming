#include <stdio.h>

int main()
{
    float x, y, z;
    x = 2;
    y = 3;
    z = 4;


    printf("the value of x * y / z is %f\n", x*y/z );
    printf("the value of x / y * z is %f\n\n", x/y*z);
    printf("the value of 3*x - 8*y is %f\n", 3*x - 8*y);
    printf("the value of 3*(x - 8*y) is %f\n\n", 3*(x - 8*y));
    printf("the value of 8*y / 3*x is %f\n", 8*y / 3*x);
   

    return 0;
}
