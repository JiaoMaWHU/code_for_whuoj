#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int t,n;
    cin>>t;
    cin.tie(0);
    while (t>0) {
        cin>>n;
        if(n%14==0) cout<<"snoopy wins the game!\n";
        else cout<<"flymouse wins the game!\n";
        t--;
    }
    return 0;
}
