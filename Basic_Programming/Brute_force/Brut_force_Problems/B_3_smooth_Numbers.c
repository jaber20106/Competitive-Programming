#include<stdio.h>

int main(){
    
    long long n;
    scanf("%lld",&n);

    while(1){
        if(n % 2 == 0) n = n / 2;
        else break;
    }
    while(1){
        if(n % 3 == 0) n = n / 3;
        else break;
    }
    if(n == 1) printf("Yes\n");
    else printf("No\n");

    return 0;
}