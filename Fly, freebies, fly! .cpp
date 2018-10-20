#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[107]={0},i,j,t,cnt;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&t);
    sort(arr,arr+n);
    int mx=0;
    for(i=0;i<n;i++)
    {
         cnt=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]<=t)
                cnt++;
                else break;
        }
        if(mx<cnt)
            mx=cnt;
    }
    printf("%d\n",mx);
    printf("%d\n",arr[7]);

    return 0;
}
