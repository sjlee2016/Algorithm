#include <iostream>
#include <stack> 
#include <cstring> 

using namespace std;

int main(){
    int n,element, e; 
    stack<int> s; 
    char str[15] = "";
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        cin >> str; 
        if(!strcmp(str,"push")){
            scanf("%d", &element);
            s.push(element);
        }else if(!strcmp(str,"top")){
            if(s.empty()){
                printf("%d\n", -1); 
            }else
               printf("%d\n", s.top()); 
        }else if(!strcmp(str,"pop")){
            if(s.empty()){
                printf("%d\n", -1); 
            }else {
            e = s.top();
            s.pop();
            printf("%d\n", e); 
            }
        }else if(!strcmp(str,"empty")){
            printf("%d\n", s.empty()); 
        }else if(!strcmp(str,"size")){
             cout << s.size() << "\n";
        }
    }
}