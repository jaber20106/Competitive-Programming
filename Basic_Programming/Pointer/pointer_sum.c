#include<stdio.h>

int main(){
    
    int a,b;
    scanf("%d%d",&a,&b);
    int *x,*y;
    x = &a;
    y = &b;
    int sum = *x + *y;
    printf("%d",sum);

    return 0;
}