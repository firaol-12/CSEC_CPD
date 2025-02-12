#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int z=0;
int y=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x>0){
		z+=x;
		
	}
	else {
		if(z<1){
		++y;
		}
		else {
			--z;
		}
	}
}
cout<<y;
	return 0;
}
