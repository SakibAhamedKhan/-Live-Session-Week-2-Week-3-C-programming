#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i = i + 1)
    {
       
        printf("Akon i hocche= %d ",i); // i=5
        for(j=1; j<=i; j=j+1){
            printf("*");
        }
        
        printf("\n");




    }

    return 0;
}