#include<bits/stdc++.h>
using namespace std;
template<class T>
struct Dijkstra
{
    int n;
    vector<vector<pair<int,T> > > adj;
    vector<int > dis;
    vector<T> parent;
    Dijkstra(int n):n(n),adj(n) {}
    void add_edge(T a,T b,int w)
    {
        adj[a].push_back({w,b});
        //adj[b].push_back({w,a});
    }
    void find_shortest_path(T src)
    {
        priority_queue<pair<int,T> ,vector< pair<int,T> > ,greater< pair<int,T> > > Q;
        dis=vector<T>(n,numeric_limits<T>::max());
        parent=vector<T>(n,-1);
        Q.push({0,src});
        dis[src]=0;
        while(!Q.empty())
        {
            pair<int,T> q=Q.top() ;
            Q.pop();
            T u=q.second;
            for(int i=0; i<adj[u].size(); i++)
            {
                auto p=adj[u][i];
                int w=p.first;
                T v=p.second;
                if(dis[v]-w > dis[u])
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

    ios_base::sync_with_stdio(false);
    int n,e,t,m,i;
    cin >> n >> e >> t >> m;
    Dijkstra<int> D(n+2);
    for(i=0;i<m;i++)
    {
        int a,b,tt;
        cin >> a >> b >> tt;
        D.add_edge(b,a,tt);
    }
    for(i=1;i<=n;i++)
    {
        D.find_shortest_path(i);
    }

    return 0;
}


