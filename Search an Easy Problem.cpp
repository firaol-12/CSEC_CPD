#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    
    int n,t;
    bool say=true;
    cin >> n;
    while(n--){
        cin >> t;
        if(t==1){
            say=false;
            cout << "HARD" << endl;
            break ;        
        }
    }
    if(say){
        cout << "EASY" << endl;
    }
    
    return 0;
}
