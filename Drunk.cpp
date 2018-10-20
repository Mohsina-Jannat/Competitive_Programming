#include<bits/stdc++.h>
using namespace std;
#define mx 10005
#define white 0
#define gray 1
#define black 2

vector<int> g[mx];
map<string,int> mp;
bool cycle;
int color[mx];
void dfs_topo(int u)
{
    color[u]=gray;
    for(int i=0; i<g[u].size(); i++)
    {
        int v=g[u][i];
        if(color[v]==white) dfs_topo(v);
        else if(color[v]==gray)
        {
            cycle=true;
            return;
        }
    }
    color[u]=black;
}
void dfs(int n)
{
    memset(color,0,sizeof(color));
    for(int i=1;i<=n;i++)
    {
        if(cycle==true) return;
        if(color[i]==white) dfs_topo(i);

    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
         int m,cnt=1;
         scanf("%d",&m);
         while(m--)
         {
             string s,t;
             cin >> s >> t;
             if(mp[s]==0) mp[s] = cnt++;
             if(mp[t]==0) mp[t] = cnt++;
             g[mp[s]].push_back(mp[t]);
         }
         cycle=false;
         dfs(m);
         if(cycle==true) printf("Case %d:No\n",tc);
         else printf("Case %d:Yes\n",tc);

    }
    return 0;
}
