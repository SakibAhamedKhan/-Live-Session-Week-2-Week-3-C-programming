

// for (initializationStatement; testExpression; updateStatement)
// {
//     // statements inside the body of loop
// }

#include <stdio.h>
int main()
{
    int i;

    for (i = 5; i <= 100; i = i + 1)
    {
        printf("%d Hello world\n", i);
    }

    return 0;
}