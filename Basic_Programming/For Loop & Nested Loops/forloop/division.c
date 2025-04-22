#include<stdio.h>
int main(){

    int i,t;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        int x;
        scanf("%d",&x);
        if(x >= 1900){
            printf("Division 1\n");
        }
        else if(x >= 1600 && x <= 1899){
            printf("Division 2\n");
        }
        else if(x >= 1400 && x <= 1599){
            printf("Division 3\n");
        }
        else{
            printf("Division 4\n");
        }
    }

    return 0;
}
