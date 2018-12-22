//BFS, no Dijkstra
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct node
{
    int x, y;
};
vector<int> graph[200000];

int Bfs(int in1, int in2, int n){
    int e[200000];
    queue<node> q;
    struct node no;no.x=in1;no.y=0;
    q.push(no);
    for(int i=0;i<n;i++) e[i]=0;
    e[in1]=1;
    while (!q.empty()) {
        int v=q.front().x;
        int dis=q.front().y;
        q.pop();
        auto it=graph[v].begin();
        while (it!=graph[v].end()) {
            if ((*it)==in2) {
                return dis;
            }else if(e[*it]==0){
                e[*it]=1;
                struct node no1; no1.x=*it; no1.y=dis+1;
                q.push(no1);
            }
            it++;
        }
    }
    return -1;
}

int main() {
    int n,m;
    int in1,in2,query;
    cin>>n>>m;
    for (int i=0; i<m; i++) {
        cin>>in1>>in2;
        graph[in1].push_back(in2);
        graph[in2].push_back(in1);
    }
    cin>>query;
    while (query>0){
        cin>>in1>>in2;
        if (in1==in2) {
            cout<<0<<endl;
        }else cout<<Bfs(in1,in2,n)<<endl;
        query--;
    }
    return 0;
}
