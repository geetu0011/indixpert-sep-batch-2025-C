#include<stdio.h>
int main()
{
    int english; 
    int maths; 
    int hindi;  
    int drawing;
    int total;
    float percentage;

    printf("please enter your english number");
    scanf("%d",&english);

    printf("please enter your maths number");
    scanf("%d",&maths);

    printf("please enter your hindi number");
    scanf("%d",&hindi);

    printf("please enter your drawing number");
    scanf("%d",&drawing);

    total=english+maths+hindi+drawing;
    printf("total=%d\n",total);
    percentage=total/4;
    printf("percentage=%.2f",percentage);

    return 0;
}