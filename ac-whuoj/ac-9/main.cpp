#include <iostream>
#include <vector>
using namespace std;
#define MAX 20000;
typedef struct{
    int d;//到达某点的最短路径距离
    int pre;//该最短路径是经过哪个点传过来的，源点或其他某个点
}path;
vector<pair<int,int>> graph[100];
char Elixir[4000];
int guard[4000][3];
path dis[100];

int main() {
    int n,m,plovers,slovers;
    int u,v,pguard,sguard,cost;
    char elixir;
    while (cin>>n>>m) {
        for (int i=0; i<m; i++) {
            cin>>u>>v>>pguard>>sguard>>cost>>elixir;
            pair<int, int> apair(v,i);
            graph[u].push_back(apair);
            apair.first=u;
            graph[v].push_back(apair);
            Elixir[i]=elixir;
            guard[i][0]=pguard;guard[i][1]=sguard;guard[i][2]=cost;
        }
        cin>>plovers>>slovers;
    }
    return 0;
}
