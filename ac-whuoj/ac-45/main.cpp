#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    getchar();
    while(t>0){
        string s;
        getline(cin,s);
        auto it=s.begin();
        if(*it>=97) *it-=32;
        it++;
        for(;it!=s.end();it++){
            if(*it<=90&&*it>=65){
                auto _it=it; _it--;
                if(*_it!=' '){
                    *it+=32;
                }
            }
        }
        cout<<s<<'\n';
        t--;
    }
    cout<<flush;
    return 0;
}
