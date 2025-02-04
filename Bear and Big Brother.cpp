#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

int main() {
    int l,count=0,b;
    cin>>l>>b;
    
    
          while(l<=b){
            count++;
            l*=3;
            b*=2;
        }
    
    cout << count << endl;
    return 0;
}
