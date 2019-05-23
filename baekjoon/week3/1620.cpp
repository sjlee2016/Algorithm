#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <stdio.h> 
#include <regex> 
#include <ctype.h> 

using namespace std; 

string str [100003] = {"",};  


bool isNumber(string x){
    regex e ("^-?\\d+");
    if (regex_match (x,e)) return true;
    else return false;
}

int main(){
    
    int n, m;
    char input [21]; 
    map<string,int> dic1; 
    map<int,string> dic2; 
    scanf("%d", &n);  
    scanf("%d", &m);
    for(int i=0; i<n; i++){
        scanf("%s", input);  
        dic1[input] = i+1; 
        dic2[i+1] = input; 
    } 

    for(int i=0; i<m; i++){
        scanf("%s", input);
        if(!isNumber(input)){
            printf("%d\n", dic1[input]);  
        }else {
            int n = stoi(input);
            printf("%s\n",dic2[n].c_str());
        }
    }
}