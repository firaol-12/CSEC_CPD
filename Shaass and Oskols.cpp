#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    int n,m,a[100+2],x,y;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=1;i<=m;i++){
        cin >> x>>y;
        a[x-1]+=(y-1);
        a[x+1]+=(a[x]-y);
        a[x]=0;
    }
    for(int i=1;i<=n;i++){
        cout << a[i] << endl;
    }
}
