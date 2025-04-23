/* Program to count of frequency of a given number in an array.*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int key,freq = 0;
    printf("Enter the key value: ");
    scanf("%d",&key);

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            freq++;
        }
    }
    printf("%d ",freq);

    return 0;
}
