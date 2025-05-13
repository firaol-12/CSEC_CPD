#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

int main() {
    string s,n;
    cin >> s;
    for(int i=0;i<s.length ();i++) {
       if(s[i] !='+'){
         n.push_back(s[i]);
       }
    }
    sort(n.begin(), n.end());
    cout << n[0];
    for(int i=1;i<n.length();i++){
        cout << '+'<< n[i];
    }
    
}
