#include<stdio.h>
int main(){

    int abc,a,b,c;
    scanf("%d",&abc);
    a = abc/100;
    b = (abc/10) % 10;
    c = abc % 10;
    int bca = (b * 100) + (c * 10) + a;
    int cab = (c * 100) + (a * 10) + b;
    int result = abc + bca + cab;
    printf("%d\n",result);

    return 0;
}
