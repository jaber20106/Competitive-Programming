/* Write a program that takes a positive integer n as input,
then takes n integers and prints only the even numbers from the given list.*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 1; i <= n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ",arr[i]);
        }
    }


    return 0;
}
