#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        int n,m;
        scanf("%d %d",&n,&m);
        int x = n - m;
        if(m > n){
            printf("0\n");
        }
        else{
            printf("%d\n",x);
        }
    }

    return 0;
}
