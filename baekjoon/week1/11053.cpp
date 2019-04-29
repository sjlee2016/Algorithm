#include <stdio.h>
#include <algorithm> 
using namespace std; 
int dp[1001] = {1,};

int main(){
    int n = 0, ans = 1; 
    dp[1] = 1 ; 
    scanf("%d", &n);
    int seq[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &seq[i]); 
    }
    dp[0] = 1; 
    for(int i =0; i<n; i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(seq[i] > seq[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        ans = max(ans, dp[i]);
    }
    printf("%d", ans);
}