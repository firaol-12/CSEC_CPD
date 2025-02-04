#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
    int count=0,n;
    int p,v,t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p>>v>>t;
        if(p+v+t >=2){
            count ++;
        }
    }
    cout << count << endl;    
    return 0;
}
