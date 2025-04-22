#include<stdio.h>

int main(){

    char s1,s2,temp,t1,t2;
    scanf("%c%c%c%c%c",&s1,&s2,&temp,&t1,&t2);
    int dif1 = abs(s1 - s2);
    if(dif1 > 2) dif1 = 5 - dif1;

    int dif2 = abs(t1 - t2);
    if(dif2 > 2) dif2 = 5 - dif2;
    if(dif1 == dif2){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}
