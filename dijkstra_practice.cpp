#include<bits/stdc++.h>
using namespace std;
template<class T>
struct Dijkstra
{
    int n;
    vector<vector<pair<int,T> > > adj;
    vector<int> dis;
    vector<T > parent;
    Dijkstra(int n):n(n),adj(n) {}
    void add_edge(T a,T b,int w)
    {
        adj[a].push_back({w,b});
        adj[b].push_back({w,a});
    }
    void find_shortest_path(T src)
    {
        priority_queue<pair<int,T> ,vector< pair<int,T > >,greater<pair<int,T> > > Q;
        dis=vector<T> (n,numeric_limits<T>::max());
        parent=vector<T> (n,-1);
        Q.push({0,src});
        dis[src]=0;
        while(!Q.empty())
        {
           pair<int,T> q=Q.top();
           Q.pop();
           T u=q.second;
           for(int i=0;i<adj[u].size();i++)
           {
               auto p=adj[u][i];
               int w=p.first;
               T v=p.second;
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
    int t,i,tc=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,src,tr;
        scanf("%d %d %d %d",&n,&m,&src,&tr);
        Dijkstra<int> D(n);
        for(i=0;i<m;i++)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            D.add_edge(u,v,w);
        }
        D.find_shortest_path(src);
        if(D.dis[tr]==numeric_limits<int>::max())
        {
            printf("Case #%d: unreachable\n",tc++);
        }
        else
            printf("Case #%d: %d\n",tc++,D.dis[tr]);

    }
    return 0;
}
