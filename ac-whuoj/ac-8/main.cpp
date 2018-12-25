#include <iostream>
#include <vector>
using namespace std;

//Greedy version

int main() {
    int like[100][100];
    int feed[100];
    int m=0,n=0,k=0,flag=0;
    while (cin>>m>>n) {
        for (int i=0; i<m; i++)
            for (int j=0; j<n; j++) cin>>like[i][j];
        cin>>k;
        for (int i=0; i<m; i++) feed[i]=k;
        for (int i=0; i<n; i++) {
            flag=0;
            for (int j=0; j<m; j++) {
                if (like[j][i]==1&&feed[j]>0) {
                    feed[j]--;
                    flag=1;
                    break;
                }
            }
            if (flag==0) {
                cout<<"No"<<endl;
                break;
            }
        }
        if(flag==1) cout<<"Yes"<<endl;
    }
    return 0;
}
