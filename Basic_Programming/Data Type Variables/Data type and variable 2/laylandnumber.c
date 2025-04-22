#include<stdio.h>
int main(){

    int x,y,n,p;
    scanf("%d%d",&x,&y);
    n = pow(x,y);
    p = pow(y,x);
    int sum = n + p;
    printf("%d\n",sum);

    return 0;
}
