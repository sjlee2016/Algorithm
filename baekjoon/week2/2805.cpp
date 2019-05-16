// Binary Search Algorithm

#include <stdio.h>
#include <algorithm> 
using namespace std; 
bool isTheRightTotal(long long array[], long long height, long long amount){
    long long sum = 0;
    
    for(int i = 0; i < sizeof(array); i++){
        if(array[i] - height > 0 ){
            sum += array[i]-height;
        }
    }
    if(sum >= amount){ // 짤린 나무 길이가 더 많거나 알맞음
        return true;
    } 
    // 짤린 나무 길이가 모자름 
    return false; 
}

int binarySearch(long long array[], long long min, long long max, long long amount){
    while(min <= max){
        long long mid = (min + max) / 2; 
        if(isTheRightTotal(array,mid,amount)){
            min = mid + 1; 
        }else{
            max = mid - 1; 
        }
    }
    return max; 
}

int main(){
    
    long long n, m,t;
    scanf("%lld%lld", &n, &m);
    long long * array = new long long [n]; 
    for(int i = 0; i<n; i++){
        scanf("%lld", &t);
        array[i] = t; 
    }
    printf("%d", binarySearch(array,0,2000000000,m)); 
}

