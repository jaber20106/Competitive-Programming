#include<stdio.h>
int main(){

    int N,M,X,Y,bones,blood;
    scanf("%d%d\n",&N,&M);
    scanf("%d%d",&X,&Y);
    bones = N * X;
    blood = M * Y;
    int sum = bones + blood;
    printf("%d\n",sum);

    return 0;
}
