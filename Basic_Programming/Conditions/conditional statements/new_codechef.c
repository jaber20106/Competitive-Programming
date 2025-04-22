#include<stdio.h>
int main(){

    int x,y;
    scanf("%d %d",&x,&y);
    if(x > y){
        printf("New\n");
    }
    else if(x == y){
        printf("same\n");
    }
    else{
        printf("Old\n");
    }

    return 0;
}
