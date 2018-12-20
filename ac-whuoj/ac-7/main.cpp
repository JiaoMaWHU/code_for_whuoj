#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int cost[10000];
    int n=0;
    int v;
    while (cin>>n) {
        for (int i=0;i<n;i++) cost[i]=10001;
        for (int i=0;i<8;i++){
            for (int j=0;j<n;j++){
                cin>>v;
                cost[j]=min(cost[j],v);
            }
        }
        v=0;
        for (int j=0;j<n;j++) v=v+cost[j];
        cout<<v<<endl;
    }
    return 0;
}
