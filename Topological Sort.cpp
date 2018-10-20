#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    pair<int,int> edge[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&edge[i].first,&edge[i].second);

    }
    int odr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&odr[i]);

    }
    int ans=1;
    for(int i=0;i<m;i++)
    {
        int u=edge[i].first;
        int v=edge[i].second;
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(f==0 && odr[j]==u) f++;
            if(f==1 && odr[j]==v) f++;
        }
        if(f!=2) ans=0;

    }


    if(ans==0) printf("NO\n");
    else printf("YES\n");

    return 0;
}
