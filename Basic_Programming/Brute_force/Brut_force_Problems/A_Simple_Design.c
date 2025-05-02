#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int x,k;
        scanf("%d%d",&x,&k);

       while(1){
        int sum = 0;
        int temp = x;

        while(temp != 0){
            int r = temp % 10;
            sum += r;
            temp = temp / 10;

        }
        if(sum % k == 0){
            printf("%d\n",x);
            break;

        }
        x++;

       }
    }
    

    return 0;
}