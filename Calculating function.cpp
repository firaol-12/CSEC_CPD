#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>

using namespace std;

int main()
{
long long t,n;
cin>>n;

if(n%2==0){
    t=n/2;
}
else{
    t=((n+1)/2)*(-1);
}
cout << t << endl;
return 0;
}
