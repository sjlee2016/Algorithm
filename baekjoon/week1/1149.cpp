#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n,i;
    scanf("%d", &n);
    int dp[1001][3] = {0,};
    int h[n+1][3];
    
    for(i =0 ; i<n; i++){
        scanf("%d %d %d", &h[i][0], &h[i][1], &h[i][2]);
    }

    dp[0][0] = h[0][0];
    dp[0][1] = h[0][1];
    dp[0][2] = h[0][2]; 
    for(i = 1 ; i<n; i++){
        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + h[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + h[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + h[i][2];
    }
    printf("%d\n", min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2])));
}