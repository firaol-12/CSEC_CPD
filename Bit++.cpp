#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
    int count=0,n;
    string opr;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>opr;
        if(opr=="X++" || opr=="++X"){
            count ++;
        }
        else if(opr=="X--" || opr=="--X"){
            count --;
        }
    }
    cout << count << endl;    
    return 0;
}
