#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    set<int> mySet;
    int count=0,arr[4];
    for(int i=0;i<4;i++){
        cin >> arr[i];
        mySet. insert(arr[i]);
    }
    int t=mySet.size();
    while(t<4){
        count ++;
        t++;
    }
    cout << count << endl;
}
