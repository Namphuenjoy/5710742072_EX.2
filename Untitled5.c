int main()
{
    int number1;
    int number2;
    int number3;
    printf("Enter there integer: ");
    scanf("%d%d%d", &number1, &number2, &number3);
    printf("Minimum is %d\n", minimum(number1,number2,number3));
    printf("Middle is %d\n", middle(number1,number2,number3));
    printf("Maximum is %d\n", maximum(number1,number2,number3));
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

