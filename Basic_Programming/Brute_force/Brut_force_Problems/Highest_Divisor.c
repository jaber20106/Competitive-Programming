#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int ans = 0;

    for(int i = 1; i <= 10; i++){
        if(n % i == 0){
            ans = i;
        }
    }
    printf("%d\n",ans);


    return 0;
}