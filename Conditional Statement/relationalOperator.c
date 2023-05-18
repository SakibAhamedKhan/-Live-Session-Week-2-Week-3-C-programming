#include <stdio.h>
int main()
{
    int a = 4, b = 4, c = 20;

    printf("%d == %d is %d \n", a, b, a == b);


    printf("%d == %d is %d \n", a, c, a == c);
    
    
    printf("%d > %d is %d \n", a, b, a > b);
    
    
    printf("%d > %d is %d \n", a, c, a > c);
    
    
    printf("%d < %d is %d \n", a, b, a < b);
    
    
    printf("%d < %d is %d \n", a, c, a < c);
    
    
    printf("%d != %d is %d \n", a, b, a != b);
    
    
    printf("%d != %d is %d \n", a, c, a != c);
    
    
    printf("%d >= %d is %d \n", a, b, a >= b);
    
    
    printf("%d >= %d is %d \n", a, c, a >= c);
    
    
    printf("%d <= %d is %d \n", a, b, a <= b);
    
    
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}