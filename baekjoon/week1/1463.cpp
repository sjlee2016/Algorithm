#include <stdio.h>
#include <algorithm>
using namespace std;
int dp[10000001] ={0,}; 
int main(){
    int n,num;
    dp[0]=0;
    dp[1]=0;
    scanf("%d",&n);
    for(int i = 2 ;i<=n; i++){
        if(i%6==0){
            dp[i]=min(dp[i/3],min(dp[i/2], dp[i-1]))+1;
        }else if(i%3==0){
            dp[i]=min(dp[i/3], dp[i-1])+1;
      
        }else if(i%2==0){
            dp[i]=min(dp[i/2], dp[i-1])+1;
      
        }else{
            dp[i]=dp[i-1]+1;
        }
    }
    printf("%d\n", dp[n]);
}