#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        int n,x;
        scanf("%d %d",&n,&x);
        if(n > x){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }

    return 0;
}
