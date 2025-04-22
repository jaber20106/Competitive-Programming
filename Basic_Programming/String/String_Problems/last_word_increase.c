#include<stdio.h>
#include<string.h>

int main(){
    
    char s[1005];
    scanf("%s",s);

    int n = strlen(s);
    s[n-1] = '4';
    
    printf("%s\n",s);

    return 0;
}