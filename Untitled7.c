#include<stdio.h>
int maxnumber(int input);
int main()
{
    int student_id, adder, i;
    printf("Enter student id: ");
    scanf("%d", &student_id);
    adder = (maxnumber(student_id))*1111;
    printf("Adder is %d\n",adder);
    printf("%d + %d = %d\n",student_id,adder,student_id+adder);
    return 0;
}
int maxnumber(int input)
{
    int maxnumber=0,num,i;
    while (input!=0){
        num = input%10;
        if(num>maxnumber) maxnumber=num;
        input/=10;
    }
    return maxnumber;
}
