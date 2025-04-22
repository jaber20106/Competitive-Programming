#include<stdio.h>
int main(){

    int x,y,area,premitar;
    scanf("%d%d",&x,&y);
    area = x * y;
    premitar = 2 * (x + y);
    printf("%d %d\n",area,premitar);

    return 0;
}
