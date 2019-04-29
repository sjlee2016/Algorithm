#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int T, n;
    scanf("%d", &T); 
    for (int i = 0; i < T; i++){
        scanf("%d", &n); 
        int dp[100001][3] = { {0,0}} ;
        int seq [2][n]; 
        for(int j = 0; j<n; j++){
            scanf("%d", &seq[0][j]); 
        }
        for(int j = 0; j<n; j++){
            scanf("%d", &seq[1][j]); 
        }
        
        dp[0][0]=0; 
        dp[0][1]=seq[0][0];
        dp[0][2]=seq[1][0];
        for(int j=1;j<n;j++){
            dp[j][0] = max(dp[j-1][0], max(dp[j-1][1], dp[j-1][2])); 
            dp[j][1]=max(dp[j-1][0],dp[j-1][2]) + seq[0][j]; 
            dp[j][2]=max(dp[j-1][0],dp[j-1][1]) + seq[1][j]; 
        }
        printf("%d\n", max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2])));
        
    }
}