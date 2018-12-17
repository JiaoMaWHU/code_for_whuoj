// 01背包问题

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int dp[101][100001];
    int s[101],p[101];
    int num,value;
    while (cin>>num) {
        for (int i=1; i<=num; i++) cin>>s[i]>>p[i];
        cin>>value;
        for (int i=0; i<=num; i++) dp[i][0]=0;
        for (int i=0; i<=value; i++) dp[0][i]=0;
        for (int i=1; i<=num; i++) {
            for (int j=1; j<=value; j++) {
                dp[i][j]=dp[i-1][j];
                if (s[i]<=j) {
                    if(dp[i][j]<(dp[i-1][j-s[i]]+p[i])) dp[i][j]=(dp[i-1][j-s[i]]+p[i]);
                }
            }
        }
		cout<<dp[num][value]<<endl;
    }
    return 0;
}
