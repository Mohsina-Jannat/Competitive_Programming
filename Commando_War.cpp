#include<bits/stdc++.h>

using namespace std;

struct soldier
{
    int brf;
    int job;
} a[10007];

bool cmp(soldier a,soldier b)
{
    return a.job > b.job;
}

int main()
{
    int n,i;

    while(cin >> n)
    {
        int kase=0,time=0,ans=0;

        if(n==0) break;



        for(i=0; i<n; i++)
        {
            cin >> a[i].brf >> a[i].job;
        }

        sort(a,a+n,cmp);

        for(i=0; i<n; i++)
        {
            time+=a[i].brf;
            ans=max(ans,time+a[i].job);
        }

        printf("Case %d: %d\n",++kase,ans);
    }

    return 0;
}
