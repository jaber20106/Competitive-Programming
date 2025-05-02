    #include<stdio.h>

    int main(){
        int t;
        scanf("%d",&t);
        
        while(t--){
            int n;
            scanf("%d",&n);

            char s[n+1];
            scanf("%s",s);

            int freq[26] = 0;

            
            for(int i = 0; i < n; i++){
                freq[s[i] - 'A']++;
            }

            int ans = 0;
            for(int i = 0; i < 26; i++){
                if(freq[i] >= i+1){
                    ans++;
                }
            }
            printf("%d\n",ans);
        }

        return 0;
    }
