#include<stdio.h>

int main(){
    
    int x = 10;
    int *ptr;
    ptr = &x;
    printf("%d\n",x);
    printf("%d",*ptr);

    return 0;
}