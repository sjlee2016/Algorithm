#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> arr;

bool myFunc(string a, string b){
    if(a.size() > b.size()){
        return  false;
    }else if(a.size() < b.size()){
        return true;
    }else{
        if(a.compare(b) == 0){
            return false;
        }
        int i = 0;
        while(true){
            if(a[i] != b[i]) {
                return a[i] < b[i];
            }
            i++; 
        }
    }
}
int main()
{
    int n, a, num;
    string s;
    scanf("%d", &n);
    for (a = 0; a < n; a++)
    {
        cin >> s;
        arr.push_back(s); 
    }

    sort(arr.begin(), arr.end(), myFunc);
    cout << arr[0] << "\n"; 

    for (int i = 1; i < n; ++i)
    {
        if(arr[i].compare(arr[i - 1]) != 0)
            cout << arr[i] << '\n';
    }
    return 0;
}