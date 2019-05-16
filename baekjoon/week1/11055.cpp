#include <stdio.h>
#include <algorithm> 
using namespace std; 
int dp[1001] = {1,};

int main(){
    int n = 0, ans = 1; 
    dp[1] = 1 ; 
    scanf("%d", &n);
    int seq[n+1];
    for(int i = 1; i<=n; i++){
        scanf("%d", &seq[i]); 
    }
    dp[0] = 1; 
    for(int i =1; i<=n; i++){
        int maxDp = 0; 
        for(int j=1; j<i; j++){
            if(seq[j] < seq[i]){
            maxDp=max(maxDp, dp[j]); 
            }
        }
        dp[i] = maxDp + seq[i];
        ans = max(ans,dp[i]);
    }
    printf("%d\n", ans);
}