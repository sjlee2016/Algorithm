#include <iostream>
#include <queue>
#include <vector> 
#include <cstdio> 
class Meeting {
    public: 
        int begin;
        int end; 
};

bool operator<(Meeting a, Meeting b)
{
    if(a.end == b.end){
        return a.begin > b.begin; 
    }else {
        return a.end > b.end; 
    }
}

// void swap(Meeting *m, int a, int b){
//     Meeting temp = m[a];
//     m[a] = m[b];
//     m[b] = temp; 
// }
// int partition(Meeting *m, int low, int high){
//     printf("low %d high %d \n", low, high);
//     int pivot = m[high].end; // index of pivot
//     int pIndex = low-1;  
//     for(int i = low;  i < high;  i++ ){
//         if(m[i].end <= pivot){
//             pIndex++;
//             swap(m,i,pIndex);
            
//         }
//     }
//     swap(m,pIndex+1,high); 
//     return pIndex+1;
// }
// void quickSort(Meeting * m, int low, int high){
//     int p; 
//     if(low < high) {
//         p = partition(m,low,high);
//         quickSort(m,low,p-1);
//         quickSort(m,p+1,high);
//     }
// }
int main(){
 int n, i, start, end, ans = 0;
 scanf("%d", &n);   
 std::priority_queue<Meeting>  pq; 
 Meeting m[n]; 
 for(i=0;i<n;i++){
     scanf("%d %d", &m[i].begin, &m[i].end); 
     pq.push(m[i]); 
 }
 end = -1; 
 while(!pq.empty()){
     Meeting next = pq.top(); 
     if(next.begin >= end) {
         ans++; 
         end = next.end; 
     }
     pq.pop(); 
 }
 printf("%d\n", ans);
}