#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int>> graph[100];
char Elixir[4000];
int guard[4000][3];
int dis[100];

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
        for (int i=0; i<100; i++) {
            if (!graph[i].empty()) {
                pair<int,int> state(0,0);
                graph[i].push_back(state);
            }
        }
    }
    return 0;
}
