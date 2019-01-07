#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    string s[100];
    for (int i=0;i<100;i++) s[i].clear();
    while (cin>>s[0]) {
        int size=(int)s[0].size();
        for (int i=1; i<size; i++) {
            auto it=s[0].begin();it=it+i;
            while (it!=s[0].end()) {
                s[i].push_back(*it);
                it++;
            }
            for (int j=0; j<i; j++) s[i].push_back(s[0][j]);
        }
        string tmp;
        for (int i=1; i<size; i++) {
            for (int j=0; j<size-i; j++) {
                if (s[j]>s[j+1]) {
                    tmp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=tmp;
                }
            }
        }
        cout<<s[0]<<endl;
        for (int i=0;i<100;i++) s[i].clear();
    }
    return 0;
}
