#include<stdio.h>
int middle( int x, int y, int z );

int main()
{
    int number1;
    int number2;
    int number3;
    printf("Enter there integer: ");
    scanf("%d%d%d", &number1, &number2, &number3);
    printf("Middle is %d\n", middle(number1,number2,number3));
    return 0;
}
int middle( int x, int y, int z )
{
    if (x>y){
        if(z>x)
            return(x);
        else
            if (y>z)
                return(y);
            else
                return(z);
        }

    else{
        if (z>y)
            return(y);
        else
            if(x>z)
            return(x);
        else
            return(z);
    }
}
