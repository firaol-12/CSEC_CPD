#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string s,t;
    
    cin >> t>>s;
    
    reverse(s.begin(), s.end());
    if(s==t){
        cout<<"YES"<<endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
    
