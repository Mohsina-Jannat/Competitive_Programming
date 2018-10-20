#include <bits/stdc++.h>
#define   sf1(x)   scanf("%d",&x)
#define   sf2(x,y)  scanf("%d %d",&x,&y)
using namespace std;

vector<int> v[100001],vr[100001];
int vis[100001],ans[100001];
stack<int> s;
int z;
void deletestack(stack<int>st)
{
    while(!st.empty())
        st.pop();
}
void dfs(int x,bool f){
    vis[x] = 1;
    int i;
    if(f){
        for(i=0;i<v[x].size();i++)
            if(!vis[v[x][i]])
                dfs(v[x][i],f);
        s.push(x);
    }
    else{
        z++;
        for(i=0;i<vr[x].size();i++)
            if(!vis[vr[x][i]])
                dfs(vr[x][i],f);
    }
}

int main(){
    int t,k=1;
    sf1(t);
    while(t--){
	int i,x,y,n,m;
	sf2(n,m);
	for(int i=0;i<=n+3;i++)
       {
            v[i].clear();
            vr[i].clear();

       }
	bool f;
	while(m--){
	    sf2(x,y);
	    v[x].push_back(y);
	    vr[y].push_back(x);
	}
	f = true;
    memset(vis,0,sizeof(vis));
	for(i=1;i<=n;i++)
	    if(!vis[i])
	        dfs(i,f);
	f = false;
	memset(vis,0,sizeof(vis));
	memset(ans,0,sizeof(ans));
	while(!s.empty()){
	    x = s.top();
	    z = 0;
	    if(!vis[x])
	        dfs(x,f);
	    if(z == 1)
	        ans[x] = 0;
	    else
	        ans[x] = 1;
	    s.pop();
	}
	int cnt=0;
	for(i=1;i<=n;i++)
	    if(!ans[i]) cnt++;
    printf("Case %d: %d\n",k++,cnt);
	    deletestack(s);
    }
	return 0;
}


