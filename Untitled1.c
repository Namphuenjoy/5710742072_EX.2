#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z,a;
    printf("Enter Number: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    a = fabs(sqrt((x*x)+(log10(y)/z)));
    printf("%lf",a);
    return 0;
}
