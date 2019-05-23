#include <iostream>
#include <queue> 
#include <cstring> 

using namespace std;

int main(){
    int n,element, e; 
    queue<int> s; 
    char str[15] = "";
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        cin >> str; 
        if(!strcmp(str,"push")){
            scanf("%d", &element);
            s.push(element);
        }else if(!strcmp(str,"front")){
            if(s.empty()){
                printf("%d\n", -1); 
            }else
               printf("%d\n", s.front()); 
        }else if(!strcmp(str,"pop")){
            if(s.empty()){
                printf("%d\n", -1); 
            }else {
            e = s.front();
            s.pop();
            printf("%d\n", e); 
            }
        }else if(!strcmp(str,"empty")){
            printf("%d\n", s.empty()); 
        }else if(!strcmp(str,"size")){
             cout << s.size() << "\n";
        }else if(!strcmp(str,"back")){
              if(s.empty()){
                printf("%d\n", -1); 
            }else
               printf("%d\n", s.back()); 
        }
    }
}