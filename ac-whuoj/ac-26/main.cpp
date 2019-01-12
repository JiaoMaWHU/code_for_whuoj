#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int cb[1000][1000];
    int dp[1000][1000]={0};
    int t=0, n=0;
    cin>>t;
    for (int _t=0; _t<t; _t++){
        cin>>n;
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++) {
                cin>>cb[i][j];
            }
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i==0) {
                    dp[i][j] = cb[i][j];
                }else{
                    if (j==0) {
                        dp[i][j] = max(dp[i-1][j],dp[i-1][j+1]) + cb[i][j];
                    }else if(j==n-1){
                        dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) + cb[i][j];
                    }else{
                        dp[i][j] = max(max(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]) + cb[i][j];
                    }
                }
            }
        }
        int best=-1;
        for (int i=0; i<n; i++) {
            if (dp[n-1][i]>best) best = dp[n-1][i];
        }
        cout<<"Case "<<_t+1<<":\n";
        cout<<best<<"\n";
        if (_t!=t-1) cout<<"\n";
    }
    cout<<flush;
    return 0;
}
