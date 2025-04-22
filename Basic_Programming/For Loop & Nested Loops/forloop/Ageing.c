#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1;i <= t; i++){
        int x;
        scanf("%d",&x);
        int n = x - 10;
        printf("%d\n",n);
    }

    return 0;
}
