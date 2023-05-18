
// dataType arrayName[arraySize];


// int a[6] = {3, 12, 15, 8, 17, 9};


// int a[] = {3, 12, 15, 8, 17, 9};


// printf("%d", a[0]) // print 3

// printf("%d", a[1]) // print 12

// printf("%d", a[2]) // print 15

// printf("%d", a[3]) // print 8

// printf("%d", a[4]) // print 17

// printf("%d", a[5]) // print 9

#include <stdio.h>
int main()
{
    int AmarArray[6] = {1,2, 4, 6, 7,8};

    printf("Line number 28 = %d\n", AmarArray[3]) ;// 6
    AmarArray[3] = 100;

    printf("Line number 31 = %d\n", AmarArray[3]) ; // 100


    return 0;
}