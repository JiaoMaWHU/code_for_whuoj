#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float n;
	while(cin>>n&&n!=0){
		cout<<(int)ceil(n/2)<<"\n";
	}
	cout<<flush;
	return 0;
}