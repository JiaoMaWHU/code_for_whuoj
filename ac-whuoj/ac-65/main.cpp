#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    while (n>0) {
        string s;
        cin>>s;
        float x=0, y=0, area=0;
        for (auto it=s.begin(); it!=s.end(); it++) {
            if(*it=='R') {
                x++;
                area+=y;
            }
            else y++;
        }
        cout<<fixed<<setprecision(3)<<(x*y/2)-area<<'\n';
        n--;
    }
    cout<<flush;
    return 0;
}
