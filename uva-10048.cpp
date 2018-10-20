#include<bits/stdc++.h>
using namespace std;
template<class T>
struct Warshal
{
    int n;
    vector<vector<pair<T,int> > > adj;
    vector<vector<T> > dis;
    Warshal(int n):n(n),adj(n),dis(n) {}
    void add_edge(T a,T b,int w)
    {
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    void find_shortest_path(T src,T t)
    {
        dis=vector<vector<T> >(n,numeric_limits<T>::max());
        for(int k=0; k<=n; k++)
        {
            for(int i=0; i<=n; i++)
            {
                for(int j=0; j<=n; j++)
                {
                    dis[i][j]=min(dis[i][j],max(dis[i][k],dis[k][j]));
                }
            }
        }
    }
};
int main()
{
    while(1)
    {
        int n,m,q;
        scanf("%d %d %d",&n,&m,&q);
        if(n==0 && m==0 && q==0) break;
        Warshal<int> W(n+2);
        for(int i=0; i<m; i++)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            W.add_edge(u,v,w);
        }
        for(int i=0; i<q; i++)
        {
            int q1,q2;
            scanf("%d %d",&q1,&q2);
            W.find_shortest_path(q1,q2);
            printf("%d\n",W.dis[q1][q2]);
        }



    }

    return 0;
}
