#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    
    int n,h,m,count =0;
    cin >> n>>h;
    for( int i=0;i<n;i++){
        cin >> m;
        if(m<=h){
            count+=1;
        }
        else{
            count+=2;
        }
    }    
    cout <<count<< endl;
    
    return 0;
}
    
