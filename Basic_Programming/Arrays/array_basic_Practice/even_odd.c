/* Write a program that takes a positive integer n as input, then takes
n integers and determines how many of them are even and how many are odd.*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int arr[n];
    int evencount = 0,oddcount = 0;

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

     for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d\n",evencount);
    printf("%d\n",oddcount);


    return 0;
}


