#include<stdio.h>

int main(){
    
    int num;
    scanf("%d",&num);

    int temp = num;
    int sum = 0;

    while(temp != 0){
        int r = temp % 10;
        sum += r;
        temp = temp / 10;
    }
    printf("%d",sum);

    return 0;
}