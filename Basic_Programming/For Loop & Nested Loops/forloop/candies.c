#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1;i <= t;i++){
        int x;
        scanf("%d",&x);
        if(x % 3 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
