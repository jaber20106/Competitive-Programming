#include<stdio.h>
#include<string.h>

int main(){
    
    int l,r;
    scanf("%d%d",&l,&r);
    l--,r--;

    char s[100005];
    scanf("%s",s);
    int n = strlen(s);

    for(int i = 0; i <= l - 1; i++){
        printf("%c",s[i]);
    }

    for(int i = r; i >= l; i--){
        printf("%c",s[i]);
    }
    
    for(int i = r+1; i <= n-1; i++){
        printf("%c",s[i]);
    }

    printf("\n");

    return 0;
}