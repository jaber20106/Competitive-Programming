#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        int n,j,count = 1;
        scanf("%d",&n);
        for(j = 1; j <= n; j++){
            if(n % 3 == 0 && n % 10 == 3){
                continue;

            }
            if(count == n){
                printf("%d\n",n);
            }
        }
    }

    return 0;
}
