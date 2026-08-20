#include<stdio.h>
int main(){
    int a, b ,num;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    while (b!=0)
    {
        num = b;
        b= a%b;
        a= num;

   }
   printf("GCD = %d",a);
   return 0;

   
    
}