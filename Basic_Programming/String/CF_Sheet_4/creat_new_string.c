#include<stdio.h>
#include<string.h>
 
int main(){
    
    char s[1001];
    char t[1001];
    scanf("%s %s",s,t);
    
    int l1 = strlen(s);
    int l2 = strlen(t);
    printf("%d %d\n",l1,l2);
    printf("%s %s\n",s,t);
 
    return 0;
}