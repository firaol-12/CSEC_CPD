#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){

string s;
cin>>s;
char start='a';
int count=0;
for(int i=0;i<s.size();i++){
   int l1=abs(s[i]- start);
   int l2=26-abs(l1);
   count+=min(l1,l2);
   start=s[i];
}
cout<<count<<endl;

}
