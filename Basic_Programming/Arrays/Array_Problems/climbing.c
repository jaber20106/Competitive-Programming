#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }
    int ans = ar[0];

    for(int i = 1; i < n; i++){
        if(ar[i] > ar[i - 1]){
            ans = ar[i];
        }
        else{
            break;
        }
    }
    printf("%d\n",ans);

    return 0;
}
