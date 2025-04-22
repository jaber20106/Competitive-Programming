#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1;i <= t; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        int a = y - x;
        printf("%d\n",a);
    }

    return 0;
}
