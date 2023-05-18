#include <stdio.h>
int main()
{
    int i, n;
    //scanf("%d", &n);

    // for (i = 1; i <= n; i = i + 1)
    // {
    //     printf("%d ", i);
    // }

    //1 - 500

    //500 - 1
    for (i = 500; i >=1 ; i = i - 10)
    {
        printf("%d\n", i);
    }

    return 0;
}