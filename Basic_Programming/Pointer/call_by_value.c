#include<stdio.h>

void fun(int x){
    printf("fun x er address: %p",&x);

}

int main(){
    
    int x = 10;
    printf("main x er address: %d\n",x);
    fun(x);

    return 0;
}