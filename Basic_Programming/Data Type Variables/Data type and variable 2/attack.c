#include<stdio.h>
int main(){

    long long A,B,div;
    scanf("%lld%lld",&A,&B);
    div = (A + B - 1) / B;
    printf("%lld\n",div);


    return 0;
}
