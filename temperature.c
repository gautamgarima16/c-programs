#include <stdio.h>
int main() {
    float celcius , fahrenheit;
    /*input temperature in celcius*/
    printf("Enter temperature in celcius :");
scanf("%f",&celcius);
/*celcius to fahrenheit conversion formula*/
fahrenheit = (celcius * 9/5)+32;
printf("%.2f celcius = %.2f fahrenheit",celcius,fahrenheit);
return 0 ;

}