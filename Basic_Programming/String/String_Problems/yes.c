#include<stdio.h>
#include<ctype.h>


int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){

        char s[1003];
        scanf("%s",s);

        s[0] = tolower(s[0]);
        s[1] = tolower(s[1]);
        s[2] = tolower(s[2]);

        if(s[0] == 'y' && s[1] == 'e' && s[2] == 's'){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}