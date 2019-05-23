#include <stdio.h>

int main(){
    int n,element, poss; 
    long m,total; 
    int arr [10001]; 
    scanf("%d %ld", &n, &m);
    for(int i =0; i<n; i++){
        scanf("%d", &element);
        arr[i] = element; 
    }   

    poss = 0; 
    for(int i =0; i<n; i++){
        total = 0;
        for(int j=i; j<n; j++){
            total += arr[j];
            if(total == m){
                poss++;
                break;  
            }else if(total > m){
                break; 
            }

        }
    }
    printf("%d\n", poss); 
}