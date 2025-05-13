#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    string len,n,m;
    cin >> n>>m;
    
    
    string s;
    for(int i=0;i<n.length();i++){
        if(n[i]==m[i]){
            cout << 0 ;
        }
        else{
            cout << 1;
        }
    }
    return 0;
}
