#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t=0;
    int x1,y1,x2,y2,dim;
    ios::sync_with_stdio(false);
    cin>>t;
    for (int _t=1; _t<t+1; _t++) {
        cin>>dim;
        cin>>x1>>y1;
        cin>>x2>>y2;
        y1=dim-y1+1;
        y2=dim-y2+1;
        cout<<"Case "<<_t<<":\n";
        if((x1+x2+y1-y2)%2==0){
            int x3=(x1+x2+y1-y2)/2;
            cout<<abs(x1-x3)+abs(x2-x3)<<"\n";
        }else{
            cout<<"-1\n";
        }
        if (_t!=t) cout<<"\n";
    }
    cout<<flush;
    return 0;
}
