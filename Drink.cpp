#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    double c=0;
    int n;
    cin >> n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        c+=arr[i]/100;
    }
    
    cout << (c/n)*100<< endl;
    return 0;
}
