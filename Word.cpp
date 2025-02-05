#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    int c1=0,c2=0;
    string s1, s;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        
        if(s1[i]==toupper(s1[i])){
            c1++;
        }
        else{
            c2++;
        }
    }
    
    if(c1>c2){
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        cout << s1 << endl;
    }
    else{
       transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
       cout << s1 << endl;
    }
    
    return 0;
}
