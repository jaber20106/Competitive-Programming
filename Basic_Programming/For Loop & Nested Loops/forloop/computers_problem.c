#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1;i <= t;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int sum = a + b;
        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}

