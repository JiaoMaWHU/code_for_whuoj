//Dijkstra
#include <iostream>
using namespace std;

struct Pointer{
    int to;
    int dis;
    struct Pointer* next;
};

int main() {
    int n,m;
    int in1,in2,query;
    cin>>n>>m;
    struct Pointer relation[200000];//不允许使用输入值来初始化
    struct Pointer* it;
    int e[200000];
    for (int i=0; i<m; i++) {
        cin>>in1>>in2;
        //
        it=&(relation[in1]);
        while ((*it).next!=NULL) {
            it=(*it).next;
        }
        struct Pointer _new; _new.to=in2; _new.dis=1;
        (*it).next=&(_new);
        //
        it=&(relation[in2]);
        while ((*it).next!=NULL) {
            it=(*it).next;
        }
        struct Pointer _new1; _new1.to=in1; _new1.dis=1;
        (*it).next=&(_new1);
    }
    cin>>query;
    while (query>0){
        cin>>in1>>in2;
        for(int i=0;i<n;i++) relation[i].to=-1;
        for(int i=0;i<n;i++) e[i]=-1;
        e[in1]=0;
        relation[in1].to=1;
        it=&relation[in1];
        while ((*it).next!=NULL) {
            it=(*it).next;
            e[(*it).to]=(*it).dis;
        }
        for (int i=1; i<n; i++) {
            int y=0;
            for (int j=0; j<n; j++) if(relation[j].to==0&&e[j]<e[y]){ y=j;}
            relation[y].to=1;
            it=&relation[y];
            while ((*it).next!=NULL) {
                it=(*it).next;
                if(e[y]+(*it).dis<e[(*it).to]) e[(*it).to]=e[y]+(*it).dis;
            }
        }
        cout<<e[in2]<<endl;
        query--;
    }
    return 0;
}
