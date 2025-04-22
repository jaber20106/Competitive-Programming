#include<stdio.h>
int main(){

    int t,i;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        int x;
        scanf("%d",&x);
        if(x>=25){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }


    return 0;
}
