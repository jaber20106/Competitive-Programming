#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int sum = a + b + c;
        if(sum == 0 || sum == 3){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }

    return 0;
}