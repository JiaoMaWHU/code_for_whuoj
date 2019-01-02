#include <iostream>
#include<stack>
using namespace std;
#define MAX 20000;

typedef struct{
    int d;//到达某点的最短路径距离
    int pre;//该最短路径是经过哪个点传过来的，源点或其他某个点
}record;
typedef struct{
    int cost;
    char elixir;
}path;

int _path[4000][5];
char _elixir[4000];
path graph[100][100];
record dis[100];
bool state[100];

int main() {
    int n,m,plovers,slovers;
    while (cin>>n>>m) {
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++) graph[i][j].cost=-1;
        for (int i=0; i<m; i++) cin>>_path[i][0]>>_path[i][1]>>_path[i][2]>>_path[i][3]>>_path[i][4]>>_elixir[i];
        cin>>plovers>>slovers;
        for (int i=0; i<m; i++){
            if (_path[i][2]<plovers&&_path[i][3]<slovers) {
                graph[_path[i][0]][_path[i][1]].cost=_path[i][4];
                graph[_path[i][0]][_path[i][1]].elixir=_elixir[i];
                graph[_path[i][1]][_path[i][0]].cost=_path[i][4];
                graph[_path[i][1]][_path[i][0]].elixir=_elixir[i];
            }
        }
        for (int i=0; i<n; i++) {
            state[i]=0;
            dis[i].d=MAX;
            dis[i].pre=-1;
        }
        state[0]=1;
        dis[0].d=0;
        for (int i=1; i<n; i++) {
            if (graph[0][i].cost!=-1) {
                dis[i].d=graph[0][i].cost;
                dis[i].pre=0;
            }
        }
        for (int i=1; i<n; i++) {
            int y=0,min=MAX;
            for (int j=0; j<n; j++) {
                if (state[j]!=1&&dis[j].d<min) {
                    y=j;min=dis[j].d;
                }
            }
            state[y]=1;
            for (int j=0; j<n; j++) {
                if (graph[y][j].cost!=-1&&dis[j].d>graph[y][j].cost+dis[y].d) {
                    dis[j].d=graph[y][j].cost+dis[y].d;
                    dis[j].pre=y;
                }
            }
        }
        stack<int> s;
        int i=n-1;
        s.push(i);
        while (i!=0) {
            s.push(dis[i].pre);
            i=dis[i].pre;
        }
        i=0;
        int j;
        while (!s.empty()) {
            j=s.top();
            s.pop();
            cout<<graph[i][j].elixir;
            i=j;
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}
