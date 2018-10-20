#include<bits/stdc++.h>
using namespace std;
template<class T>
struct Dijkstra
{
    int n;
    vector<vector<pair<T,int> > > adj;
    vector<int> dist;
    vector<T> parent; //dist printing

    Dijkstra(int n):n(n),adj(n) {}
    void add_edge(int a,int b,T w)
    {
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    void find_shortest_path(int src)
    {
        priority_queue<pair<T,int>,vector<pair<T,int> >,greater<pair<T,int> > > Q;
        dist=vector<T>(n,numeric_limits<T>::max());
        parent=vector<int>(n,-1);
        dist[src]=0,Q.push({0,src});
        while(!Q.empty())
        {
            auto p = Q.top(); Q.pop();
            int u = p.second;
            for(int i = 0; i<adj[u].size(); i++)
            {
                pair< T, int> q = adj[u][i];
                int v = q.first; T d = q.second;
                if(dist[v] - d > dist[u]){
                    dist[v] = dist[u] + d;
                    parent[v] = u;
                    Q.push({dist[v], v});
                }
            }
        }
    }

};

int main()
{
    int t, tst = 1;
    scanf("%d", &t);
    while(t--)
    {
        int n, m, s, tt;
        scanf("%d %d %d %d", &n, &m, &s, &tt);
        Dijkstra<int> D(n+1);
        for(int i = 0; i<m; i++)
        {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            D.add_edge(u, v, w);
        }
        D.find_shortest_path(s);
        printf("Case #%d: ", tst++);
        if(D.dist[tt]==numeric_limits<int>::max()) printf("unreachable\n");
        else printf("%d\n", D.dist[tt]);
    }

    return 0;
}
