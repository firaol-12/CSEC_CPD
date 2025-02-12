#include <iostream>
#include <algorithm>
#include <numeric>  
#include <cmath>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    
    int c=max(y,w);
    int x=7-c;
    
    int g=gcd(x,6);
    
    cout << x/g<<'/'<<6/g << endl;

    return 0;
}
