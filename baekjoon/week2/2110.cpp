#include <cstdio>
#include <algorithm>
#include <iostream> 
#include <vector>
using namespace std;
long long n, m;
vector <long long> v;
void binarySearch(long long low, long long high){
    long long mid;
    long long possible;
    long long previous; 
    long long ans; 
    long long maximum = -1;  
    while(low <= high){
        possible = 1; 
        mid = (low + high)/2;
        for(int i = 0 ; i<n-1; i++){ 
            for(int j  = i + 1; j < n; j++){
                if(v[i] + mid > v[j])
                continue;
                else{
                    i = j -1;
                    possible ++ ;
                    break; 
                }
            }
        }
        if(possible>=m){
            ans = mid; 
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    printf("%lld\n", ans); 
} 
int main(){
    long long cordinate; 
    scanf("%lld %lld", &n,&m);
    for(int i =0; i<n; i++){
        scanf("%lld" , &cordinate);
        v.push_back(cordinate);   
    }
    sort(v.begin(), v.end()); 
    binarySearch(1, v.back() - v.front()); 
}