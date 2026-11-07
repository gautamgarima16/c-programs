#include<stdio.h>
int main(){
    int n =10 ;
    if(n>0){
        printf("%d",n);
        n--;
        main();
    }
    return 0;
}
