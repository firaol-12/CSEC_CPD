#include<iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    int n,ext;
    cin >> n>>ext;
    int arr[n];
    string newarr[n];
    int Max=INT_MIN;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(Max<arr[i]){
            Max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if((arr[i]+ext)>=Max){
            newarr[i]="true";
        }
        else{
            newarr[i]="false";
        }
        cout << newarr[i]<< endl;
    }
}
