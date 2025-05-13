#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    string s,t;
    cin >> n;
    s=to_string(n);
    t=s;
    reverse(s.begin(),s.end());
    if(t==s){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;    
    }
   
    return 0;
}
