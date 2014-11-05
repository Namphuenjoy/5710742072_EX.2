#include<stdio.h>
int maximum( int x, int y, int z );
int minimum( int x, int y, int z );
int main()
{
    int number1;
    int number2;
    int number3;
    int a ;
    a!= maximum(number1,number2,number3) && a != minimum(number1,number2,number3) ;
    printf("Enter there integer: ");
    scanf("%d%d%d", &number1, &number2, &number3);
    printf("Middleis %d\n", a );
    return 0;
}
int maximum( int x, int y, int z )
{
    int max = x;
    if(y>max){
        max = y;
    }
    if(z>max){
        max = z;
    }
    return max;
}
int minimum( int x, int y, int z )
{
    int min = x;
    if(y<min){
        min = y;
    }
    if(z<min){
        min = z;
    }
    return min;
}
