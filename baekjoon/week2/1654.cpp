#include <stdio.h>
#include <cstring> 
#include <vector> 
#include <iostream>
using namespace std; 
long long n,m, ans; 
vector<long long>v;
void binarySearch(long long low, long long high){
    long long mid;
    long long total;
    long long ans = -1; 
    while(low<=high) {
        total = 0; 
        mid  = (low + high) / 2;
        for(long long i = 0; i<n; i++){
            total += v[i]/mid; 
        }
        if(total>=m){
            ans = max(ans, mid); 
            low = mid + 1;
        }else if(total<m){
            high = mid - 1; 
        }
    }
    printf("%lld\n", ans); 

}
int main(){
    long long d; 
    int max = -1;  
    scanf("%lld %lld", &n, &m);
    for(int i = 0; i<n ; i++){
        scanf("%lld", &d);
        v.push_back(d); 
    }
    sort(v.begin(), v.end()); 
    binarySearch(1, v.back()); 
}