#include <iostream>
using namespace std;

int memo[41] = {1,1,};
int fibonacci(int n){
  if(n<=1){
      return memo[n];  
  }else {
      if(memo[n] > 0){
          return memo[n];
      }
  }
  return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main() 
{
    int n, k; 
    cin >> n; 
    for(int i = 0; i<n; i++){
        cin >> k; 
        if(k==0)
         cout << "1 0\n";
         else if(k==1)
         cout << "0 1\n";
        else { 
        fibonacci(k);
        cout << memo[k-2] << " ";
        cout << memo[k-1] << "\n";
        } 
    }
}
