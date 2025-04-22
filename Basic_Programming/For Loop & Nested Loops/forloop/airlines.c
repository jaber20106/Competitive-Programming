#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        int x,n;
        scanf("%d %d",&x,&n);
        int m = n / 100;
        if(n % 100 != 0){
            m++;
        }
        if(x >= m){
            printf("0\n");
        }
        else{
            int extra = m - x;
            printf("%d\n",extra);
        }
    }

    return 0;
}
