#include <stdio.h>
int main()
{
    int a=10, b=20;

    // int ans = a<b; // 10 < 20 ==> 1 (True)
    // True 1 
    // False 0 

    int ans = a==b; // 10 == 20 ==> 0 (False)


    printf("%d\n",ans);

    return 0;
}