#include<stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int isbeautiful = 0;

        for(int i = 0; i < n; i++){    
            scanf("%d",&arr[i]);
        }
        
        for(int i = 0; i < n; i++){
            if(arr[i] <= i+1){
                isbeautiful = 1;
                break;
            }
        }
        if(isbeautiful == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}