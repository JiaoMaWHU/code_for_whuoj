#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n=0, k=0;
    int s[1000];
    cin>>n;
    for (int z=0; z<n; z++){
        cin>>k;
        for (int i=0; i<k; i++) {
            cin>>s[i];
        }
        for (int i=k-1; i>0; i--) s[i] = s[i] - s[i-1];
        for (int i=0; i<k; i++) {
            for (int j=0; j<k-i-1; j++) {
                if(s[j]>s[j+1]){
                    int tmp = s[j+1];
                    s[j+1] = s[j];
                    s[j] = tmp;
                }
            }
        }
        cout<<"Case "<<(z+1)<<":\n";
        for (int i=0; i<k; i++) cout<<s[i]<<" ";
        cout<<"\n";
        if(z!=n-1) cout<<"\n";
    }
    cout<<flush;
    return 0;
}
