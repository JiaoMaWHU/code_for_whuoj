#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n=0;
    int max, _max;
    while (cin>>n&&n!=0) {
        max=-(int)pow(2,16);
        for (int i=0; i<n; i++) {
            cin>>_max;
            if (_max>max) max=_max;
        }
        max %= 2006;
        if (max<0) max += 2006;
        for (int i=0; i<n-1; i++) {
            max *= 2;
            max %= 2006;
        }
        cout<<max<<"\n";
    }
    cout<<flush;
    return 0;
}
