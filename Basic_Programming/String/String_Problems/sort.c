#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[4];
        scanf("%s", s);
        
        if(s[0] == 'a'){
            printf("YES\n");
        }
        else if(s[1] == 'b'){
            printf("YES\n");
        }
        else if(s[2] == 'c'){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
