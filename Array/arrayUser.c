#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    
    for(int i=0; i<n; i = i+1 ){
        scanf("%d", &arr[i]);
    }

   
    for(int i=0; i<n; i = i+1 ){
        printf("i hobe = %d arr[i] hobe = %d\n",i, arr[i]);
    }
    
    return 0;
}