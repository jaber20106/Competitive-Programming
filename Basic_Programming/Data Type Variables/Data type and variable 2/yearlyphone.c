#include<stdio.h>
int main(){

    int X;
    scanf("%d",&X);
    int n = X % 100;
    printf("K%02d\n",n);

    return 0;
}
