#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        char s[7];
        scanf("%s",s);

        int a = s[0] + s[1] + s[2];
        int b = s[3] + s[4] + s[5];
        if(a == b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}