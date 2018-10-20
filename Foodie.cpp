#include<bits/stdc++.h>
using namespace std;
int n,k,arr[107],dp[107][1007];
int rec(int pos,int w)
{
    int tak1,tak2,ans;
    if(pos==n)
        return 0;
    if(dp[pos][w]!=-1)
        return dp[pos][w];
    if(w-arr[pos]>=0)
          tak1=rec(pos+1,w-arr[pos])+arr[pos];
           tak2=rec(pos+1,w);
          ans=max(tak1,tak2);
        dp[pos][w]=ans;
        return ans;

}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int cu;
        scanf("%d",&n,&k);
        for(int i=0; i<n; i++)
        {
            int r,sum=0;
            scanf("%d",&r);
            for(int j=0; j<r; j++)
            {
                int ut;
                scanf("%d",&ut);
                sum+=ut;

            }
            arr[i]=sum;

        }
        cu=rec(0,k);
            printf("%d\n",cu);
    }
    return 0;
}
