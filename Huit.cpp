#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a,b;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            a="I love ";
        }
        else{
            a="I hate ";
        }
        if(i==n){
            b="it ";
        }
        else{
            b="that ";
        }
        cout<<a<<b;
    }


    return 0;
}
