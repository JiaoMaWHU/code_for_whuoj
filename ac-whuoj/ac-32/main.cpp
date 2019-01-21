#include <iostream>
using namespace std;
bool ma[10][3000];
int m,n;
int max_sum;

int count(){
	int sum=0,col=0;
	for (int j=0; j<n; j++){
		col=0;
		for(int i=0; i<m; i++) {
			if(ma[i][j]!=0) col++;
		}
		if(2*col<m) col=m-col;
		sum += col;
	}
	return sum;
}

void low_dim(int start){
	if(start<m-1) {
		low_dim(start+1);
	}else{
		int sum=count();
		if(sum>max_sum) {
			max_sum=sum;
			return;
		}
		if(max_sum==m*n){
			return;
		}
	}
	for(int i=0;i<n;i++) ma[start][i]=!ma[start][i];
	if (start<m-1)
	{
		low_dim(start+1);
	}else return;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	while(cin>>m){
		cin>>n;
		for (int i=0; i<m; i++)
			for(int j=0; j<n; j++)
				cin>>ma[i][j];
		max_sum=0;
		low_dim(0);
		cout<<max_sum<<"\n";
	}
	cout<<flush;
	return 0;
}