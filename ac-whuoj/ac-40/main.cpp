#include <iostream>
#include <map>
using namespace std;

int main(){
	int t=0,n=0,v=0;
	cin>>t;
	while(t>0){
		int max=0;
		cin>>n;
		map<int, int> map1;
		while(n>0){
			cin>>v;
			auto it = map1.find(v);
			if (it==map1.end()) map1[v]=1;
			else it->second++;
			if (map1[v]>max) max=map1[v];
			n--;
		}
		cout<<max<<"\n";
		t--;
	}
	cout<<flush;
}