#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,max=0,s=0,d=0,play=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int start=0,end=n-1;
    while(start<=end){
        if(arr[start]>=arr[end]){
            max=arr[start];
            start++;
        }
        else{
            max=arr[end];
            end--;
        }
        if(play%2==0){
            s+=max;
        }
        else{
            d+=max;
        }
        play++;
    }
    cout << s<<" "<<d << endl;
    return 0;
}
