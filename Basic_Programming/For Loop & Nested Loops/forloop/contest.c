#include<stdio.h>
int main(){

    int n,m;
    scanf("%d %d",&n,&m);
    int total_score = 0;
    for(int i = 1; i <= n; i++){
            int x;
            scanf("%d",&x);
            if(x <= m){
                total_score += x;
            }

    }
    printf("%d\n",total_score);

    return 0;
}
