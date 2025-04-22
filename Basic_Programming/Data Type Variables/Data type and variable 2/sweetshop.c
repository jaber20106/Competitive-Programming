#include<stdio.h>

int main(){


    int x,n;
    scanf("%d%d",&x,&n);
    int rem = x - n * 10;
    printf("%d\n",rem / 20);

    return 0;
}
