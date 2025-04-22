#include<stdio.h>
int main(){

    int n,i;
    int count = 1;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 10 == 3){
            continue;
        }

        printf("%d = %d\n",count,i);
            count++;
    }

    return 0;
}
