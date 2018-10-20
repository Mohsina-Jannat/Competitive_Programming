#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[100007];
int main()
{
    int n,i,cnt=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&p[i].second,&p[i].first);
    }
    sort(p,p+n);
    int e=p[1].first;
    for(i=2; i<=n; i++)
    {
        if(p[i].second>=e)
        {
            cnt++;
            e=p[i].first;
        }
    }
    printf("%d\n",cnt);

    return 0;
}
