#include <stdio.h>
int main(){
    float p , r,  t , si;
    printf("Enter the Principal amount:");
    scanf("%f",&p);
    printf("Enter the Rate of interest:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("Simple Interest = %.2f",si);
    return 0 ;
}