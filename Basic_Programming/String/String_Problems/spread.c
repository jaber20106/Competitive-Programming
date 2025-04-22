#include<stdio.h>
#include<string.h>

int main(){
    
    char s[100];
    scanf("%s",s);
    
    int n = strlen(s);

    for(int i = 0; i < n; i++){
        printf("%c",s[i]);
        if(i != n-1){
             printf(" ");
        }
    }
    printf("\n");
    

    return 0;
}