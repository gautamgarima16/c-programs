#include<stdio.h>
int main(){
    int a =10;
    unsigned char *p = (unsigned char*)&a;
    for(int i = 0; i <sizeof(a); i++)
    printf("%02X", p[i]);
    return 0;
}