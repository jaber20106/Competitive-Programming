#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a = n / (k + 1);
        int b = a * k;
        int c = n - b;
        printf("%d\n",c);
    }

    return 0;
}
