#include <stdio.h>
#include <string.h>
int main()
{
    char stringName[100];
    scanf("%s", stringName);

    printf("%s\n",stringName);
    int len = strlen(stringName);
    printf("%d\n",len);
    
    return 0;
}