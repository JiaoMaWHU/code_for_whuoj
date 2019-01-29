#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    
    while (1) {
        string s1,s2;
        getline(cin, s1);
        if(s1=="ENDOFINPUT") break;
        getline(cin, s2);
        for (auto it=s2.begin(); it!=s2.end(); it++) {
            if(*it>=65&&*it<=90){
                int n=(int)*it;
                n=(n-65+21)%26;
                n+=65;
                *it=(char)n;
            }
        }
        cout<<s2<<"\n";
        getline(cin, s2);
    }
    cout<<flush;
    return 0;
}
