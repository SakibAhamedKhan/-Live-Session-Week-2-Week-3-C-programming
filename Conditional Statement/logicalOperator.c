#include <stdio.h>
int main()
{
    int a=3, b=3;

    //1<a<3 // 1<3<3

    //int ans = (a>1) && (a<3); // True && True => True

    int ans = (a>1) || (a<3); // True && False => True

    printf("%d\n",ans);
    return 0;
}