#include<stdio.h>
int main()
{
    int day ,month, year;
    printf("enter the date(day ,month, year): ");
    scanf("%d%d%d",&day,&month,&year);
    if (month<1||month>12)
    printf("Invalid date");
    else if (day<1||day>31)
    printf("Invalid date");
    else if((month==4||month==6||month==9||month==11)&& day>30)
    printf("Invalid date");
    else if(month==2&&day>28&& !(year % 400 ==0|| (year %4 == 0 && year % 100 !=0)))
    printf("Invalid date");
    else if(month ==2&&day>29)
    printf("Invlaid date");
    else
    printf("Valid date");
    return 0;
    



    
    
    

}