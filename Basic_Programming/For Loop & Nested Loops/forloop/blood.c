#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        int n,x;
        scanf("%d %d",&n,&x);
        int m = n - x;
        printf("%d\n",m);
    }

    return 0;
}
