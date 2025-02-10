#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    int j=0,count=1;
    string s ,t;
    cin>>s>>t;
    for(int i=0;i<t.length();i++){
        if(t[i]==s[j]){
            j++;
            count++;
        }
    }
    cout << count << endl;
}
