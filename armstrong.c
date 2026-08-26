#include<stdio.h>
int main(){
    int n,temp,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem =n%10;
        sum=sum+rem*rem*rem;
        n=n/10;

    }
    if(sum==temp)
    printf("armstrong number");
    else
    printf("not an armstrong");
    return 0;
    
}