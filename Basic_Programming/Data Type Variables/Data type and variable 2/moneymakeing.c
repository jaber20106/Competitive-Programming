#include<stdio.h>
int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    int nugets = 5000,pices = 9800;
    int sum = (nugets * a) + (pices * b);
    printf("%d\n",sum);

    return 0;
}
