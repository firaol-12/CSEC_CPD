#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a>> b;

    for (int i= 1; i<= 10; i++) { 
        int tc= i * a;
        
        if (tc% 10 == b|| tc% 10 == 0) {
            cout << i; 
            break; 
        }
    }

}
