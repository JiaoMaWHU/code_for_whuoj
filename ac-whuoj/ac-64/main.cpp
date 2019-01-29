#include <iostream>
#include <set>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int t,n;
    cin.tie(0);
    while (cin>>t) {
        set<int> s;
        for (int i=0; i<t; i++) {
            cin>>n;
            s.insert(n);
        }
        for (auto it=s.begin();it!=s.end();it++){
            cout<<*it<<" ";
        }
        cout<<'\n';
    }
    cout<<flush;
    return 0;
}
