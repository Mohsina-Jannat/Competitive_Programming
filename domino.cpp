#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100007];
bool visit[100007];
stack<int> st;
void dfs(int u)
{
    int i;
    visit[u]=true;
    for(i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!visit[v]) dfs(v);
    }
    st.push(u);
    return;

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i;
        scanf("%d %d",&n,&m);
        for(i=0;i<m;i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
        }
        memset(visit,0,sizeof(visit));
        for(i=1;i<=n;i++)
        {
            if(!visit[i]) dfs(i);
        }
        memset(visit,0,sizeof(visit));
        int cnt=0;
        while(!st.empty())
        {
            int x=st.top();  st.pop();
            if(!visit[x])
            {
               cnt++;
                dfs(x);
            }
        }
        printf("%d\n",cnt);
        for(i=1;i<=n;i++) adj[i].clear();
    }
    return 0;
}
