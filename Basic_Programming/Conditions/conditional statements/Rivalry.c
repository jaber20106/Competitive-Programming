#include<stdio.h>
int main(){

    int r1,r2,d1,d2;
    scanf("%d%d\n",&r1,&r2);
    scanf("%d%d",&d1,&d2);
    int ans1 = r1 + d1;
    int ans2 = r2 + d2;
    if(ans1 > ans2){
        printf("Dominater\n");
    }
    else{
        printf("Everule\n");
    }

    return 0;
}
