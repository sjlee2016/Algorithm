#include <iostream>
#include <stack> 
using namespace std;

bool isPS(char * str){
    stack<char> s; 
    for(int i =0; i<strlen(str); i++){
        if(str[i]=='('){
            s.push(str[i]);
        }else if(str[i]==')'){
            if(s.empty()){
                return false; 
            }else {
                s.pop(); 
            }
        }
    }

    if(s.empty()){
        return true;
    }else 
        return false; 
}
int main(){
    int n;

    char str [51];  
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%s", &str); 
        if(isPS(str)){
            printf("%s\n", "YES");
        } else{
            printf("%s\n", "NO");     
        }
    }
}
