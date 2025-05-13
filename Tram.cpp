#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    
    int n,a,b,c=0,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a>>b;
        c+=(b-a);
        x=max (x,c);
    }
    cout <<x;
    return 0;
}
    
