#include<stdio.h>
int nearest_prime(int x);
int isprime(int n);
int main()
{
    int input;
    printf("Enter scope number: ");
    scanf("%d",&input);
    printf("Nearest prime number is %d",nearest_prime(input));
    return 0;
}
int nearest_prime(int x)
{
    int i;
    for(i=x; i>0; i--){
        if(isprime(i)) return i;
    }
    return 0;
}

int isprime(int n)
{
    int i;
    for(i=2; i<n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
