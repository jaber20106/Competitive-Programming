#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int key,flag = 0,pos;
    printf("Enter the value of search number: ");
    scanf("%d",&key);

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            pos = i + 1;
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("\nNumber found %d position\n",pos);
    }
    else{
        printf("Number not found\n");
    }

    return 0;
}
