#include<bits/stdc++.h>

using namespace std;

vector<int > v[100007],vr[100007];
int vis[100007],ans[100007];
stack<int> s;
int z;

void dfs(int x,bool f)
{
    vis[x]=1;

    if(f)
    {
       for(int i=0;i<v[x].size();i++)
       {
           if(!vis[v[x][i]])
           {
               dfs(vis[v[x][i]],f);
           }
           s.push(x);
       }
    }

    else
    {
        z++;
        for(int i=0;i<vr[x].size();i++)
            if(!vis[vr[x][i]])
               dfs(vis[vr[x][i]],f);
    }
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        for(int i=0;i<n+3;i++)
        {
            v[i].clear();
            vr[i].clear();
        }

        while(m--)
        {
            int u,v;
             scanf("%d %d",&u,&v);
             v[u].push_back(v);
             vr[v].push_back(u);
        }

        memset(vis,0,sizeof(vis));
         f=true;



        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
                dfs(i,f);
        }
        bool f=false;
        memset(vis,0,sizeof(vis));
        memset(ans,0,sizeof(ans));


        while(!s.empty())
        {
            int x=s.top();
            z=0;

            if(!vis[x])
                dfs(x,f);

           if(z==1)
            ans[x]=0;
           else
            ans[x]=1;

           s.pop();
        }
        int cnt=0;

        for(int i=1;i<=n;i++)
        {
            if(!ans[i]) cnt++;

            printf("Case %d: %d\n",cnt);
        }
    }
    return 0;
}
