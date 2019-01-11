#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
using namespace std;

// ~N^lgN,43ms
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    while (cin>>n) {
        set<pair<int, int>> p;
        int max_y,min_y;
        int x,y;
        cin>>x>>y;
        p.insert(make_pair(x, y));
        max_y = min_y =y;
        for (int i=0; i<n-1; i++) {
            cin>>x>>y;
            p.insert(make_pair(x, y));
            if (y > max_y) max_y = y;
            if (y < min_y) min_y = y;
        }
        int b = max_y + min_y;
        bool is = 1;
        for (auto it = p.begin(); it!=p.end(); it++) {
            int x = (*it).first;
            int y = b - (*it).second;
            if (p.find(make_pair(x,y))==p.end()) {
                is = 0;
                break;
            }
        }
        if (is == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
