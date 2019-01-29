#include <iostream>
using namespace std;
int m[101][101];
int p[101];

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while (t>0) {
        int n;
        cin>>n;
        int left=n;
        for (int i=1; i<n+1; i++) {
            for (int j=1; j<n+1; j++) {
                cin>>m[i][j];
            }
            p[i]=0;
        }
        p[1]=1;left--;
        int cost=0,v=0;
        while (left>0) {
            int min=100001;
            for(int i=1;i<n+1;i++){
                if(p[i]==1){
                    for(int j=1;j<n+1;j++){
                        if(p[j]==0){
                            if(m[i][j]<min){
                                min=m[i][j];
                                v=j;
                            }
                        }
                    }
                }
            }
            cost+=min;
            p[v]=1;
            left--;
        }
        cout<<cost<<'\n';
        t--;
    }
    cout<<flush;
    return 0;
}
