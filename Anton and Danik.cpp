
#include <iostream>

using namespace std;

int main()
{
    int count=0,sum=0,n;
    string s;
    
    cin >> n>>s;
    
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            sum++;
        }
        else if(s[i]=='D'){
            count++;
        }
    }
    if(sum>count){
        cout << "Anton" << endl;
    }
    else if(sum<count){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}
