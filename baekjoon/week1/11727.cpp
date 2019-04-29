#include <stdio.h>

int dp[1001] = {0};
int dfs(int n){
    if(n<=1){
        return 1;
    }
    if(dp[n]==0){
        int ret = (dfs(n-1) + dfs(n-2) + dfs(n-2))%10007;
        dp[n] = ret; 
        return ret;
    }else{
        return dp[n]; 
    }
}
int main(){
    int n = 0;
    dp[1] = 1 ; 
    scanf("%d", &n);
    int ans = dfs(n);
    printf("%d\n", ans);
}