#include<stdio.h>
int main()
{
    printf("this is all even numbers:-\n");
    for(int a=2;a<100;a++)
    {
        if(a%2==0)
        {
            printf("%d",a);
        }
    } 
    return 0;
} 
