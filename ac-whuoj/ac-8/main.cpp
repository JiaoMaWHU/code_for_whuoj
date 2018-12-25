#include <iostream>
#include <vector>
using namespace std;

//Greedy version
int like[100][100];
int feed[100];
int m=0,n=0;
int k=0;
vector<int> comb[100];

bool feed_this(int remain,int p);
int get_comb(int p, int _k);

int main() {
    while (cin>>m) {
        cin>>n;
        for (int i=0; i<m; i++)
            for (int j=0; j<n; j++) cin>>like[i][j];
        cin>>k;
        for (int i=0; i<n; i++) feed[i]=0;
        feed_this(n,0);
    }
    return 0;
}

bool feed_this(int remain,int p){
    get_comb(p,0);
    
    return false;
}

int get_comb(int p, int _k){
    if (_k==k) {
        return 0;
    }
    for (int i=0; i<m; i++) {
        if (like[p][i]==1){
            comb[p].push_back(i);          
        }
    }
    return 0;
}
