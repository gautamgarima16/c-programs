#include<stdio.h>
int main(){
    float cp,sp;
    printf("Enter Cost Price:");
    scanf("%f",&cp);
    printf("Enter Selling price:");
    scanf("%f",&sp);
    if(sp>cp)
    printf("profit");
    else if (cp>sp)
    printf("loss");
    else
    printf("no profit no loss");
    return 0;
    
}