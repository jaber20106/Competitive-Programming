#include<stdio.h>
int main(){

    int s[8];
    for(int i = 0; i < 8; i++){
        scanf("%d",&s[i]);
    }
    int flag = 1;

    for(int i = 0; i < 8; i++){
        if(s[i] < 100 || s[i] > 675){
            flag = 0;
            break;
        }
    }

    for(int i = 0; i < 8; i++){
        if(s[i] % 25 != 0){
            flag = 0;
            break;
        }
    }

    for(int i = 0; i < 7; i++){
        if(s[i] > s[i + 1]){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}
