#include<bits/stdc++.h>
using namespace std;
int pr[1007];
int sz[1007];

int dp[1007][37];
int rec(int idx,int rem)
{
    if(idx==0 || rem==0) return 0;
    if(dp[idx][rem]!=-1) return dp[idx][rem];
    int res1,res2;
    res1=res2=0;
    if(sz[idx]<=rem)
        res1=pr[idx]+rec(idx-1,rem-sz[idx]);
    res2=rec(idx-1,rem);
    dp[idx][rem]=max(res1,res2);
    return dp[idx][rem];
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&pr[i],&sz[i]);
        }
        int mem;
        scanf("%d",&mem);
        int ans=0;
        for(j=1; j<=mem; j++)
        {
            memset(dp,-1,sizeof(dp));
            int bg_siz;
            scanf("%d",&bg_siz);
            ans+=rec(n,bg_siz);

        }
        printf("%d\n",ans);
    }
    return 0;
}
