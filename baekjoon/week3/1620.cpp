#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <stdio.h> 
#include <regex> 
using namespace std; 

map<string, int>::iterator serachByValue(map<string, int> & mapOfWords, int val)
{
    // Iterate through all elements in std::map and search for the passed element
    map<string, int>::iterator it = mapOfWords.begin();
    while(it != mapOfWords.end())
    {
        if(it->second == val)
        return it;
        it++;
    }
}

map<string, int>::iterator serachByKey(map<string, int> & mapOfWords, string val)
{
    // Iterate through all elements in std::map and search for the passed element
    map<string, int>::iterator it = mapOfWords.begin();
    while(it != mapOfWords.end())
    {
        if(it->first == val)
        return it;
        it++;
    }
}

bool isNumber(string x){
    regex e ("^-?\\d+");
    if (regex_match (x,e)) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(true); 
    cin.tie(NULL);
    int n, m;
    string input; 
    map<string,int> dic; 
    scanf("%d", &n); 
    scanf("%d", &m); 
    for(int i=0; i<n; i++){
        scanf("%s",&input); 
        dic[input] = i+1; 
    } 

    for(int i=0; i<m; i++){
        scanf("%s", &input);
        if(!isNumber(input)){
            map<string, int>::iterator it = serachByKey(dic, input);
            printf("%d\n", it->second);
        }else {
            int n = stoi(input);
            map<string, int>::iterator it = serachByValue(dic, n);
            cout << it->first << "\n";  
        }
    }
}