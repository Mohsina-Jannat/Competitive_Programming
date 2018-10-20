#include<bits/stdc++.h>
using namespace std;
template<class T>
struct Dijkstra
{
    int n;
    vector<vector<pair<T,int> > > adj;
    vector<T> dis;
    vector<T> parent;
    Dijkstra(int n):n(n),adj(n) {}
    void add_edge(T a,T b,int w)
    {
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    void find_shortest_path(T src)
    {
        priority_queue<pair<int,T>,vector<pair<int,T> > ,greater<pair<int,T> > > Q;
        dis=vector<T>(n,numeric_limits<T>::max());
        parent=vector<T> (n,-1);
        Q.push({0,src});
        dis[src]=0;
        while(!Q.empty())
        {
            pair<int,T> q=Q.top();
            Q.pop();
            T u=q.second;
            for(int i=0; i<adj[u].size(); i++)
            {
                auto p=adj[u][i];
                int w=p.second;
                T v=p.first;
                if(dis[v]-w>dis[u])
                {
                    dis[v]=dis[u]+w;
                    parent[v]=u;
                    Q.push({dis[v],v});
                }
            }
        }
    }


};
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n,m,s,e;
        scanf("%d %d %d %d",&n,&m,&s,&e);
        Dijkstra<int> D(n+2);
        for(int j=0; j<m; j++)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            D.add_edge(u,v,w);
        }
        D.find_shortest_path(s);
        if(D.dis[e]==numeric_limits<int>::max())
            printf("NONE\n");
        else printf("%d\n",D.dis[e]);
    }
    return 0;
}
