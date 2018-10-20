#include<bits/stdc++.h>
using namespace std;
pair<int,int> score1[1000007],score2[1000007];
int arr1[1000007],arr2[1000007];
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first> b.first;
}
int main()
{
    int n,i, tc=1;;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr1[i]);
            score1[i].first=arr1[i];
            score1[i].second=i+1;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr2[i]);
            score2[i].first=arr2[i];
            score2[i].second=i+1;
        }
        sort(score1,score1+n,cmp);
        sort(score2,score2+n,cmp);
        //printf("Case %d: ",tc++);
        for(i=0; i<n; i++)
        {
            if(score1[i].second!=score2[i].second)
            {
                printf("Case %d: %d\n",tc++,i+1);
                break;
            }
        }
        if(i==n) printf("Case %d: agree\n",tc++);
    }

    return 0;
}
