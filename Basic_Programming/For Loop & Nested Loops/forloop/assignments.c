#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int a = x * y;
        int b = z * 24 * 60;
        if(a <= b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
