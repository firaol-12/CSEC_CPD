#include<iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    string  s1;
    cin>>s1; 
    for(int i=0;i<n;i++){
        if(s1[i]==s1[i+1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
