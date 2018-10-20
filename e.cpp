#include<bits/stdc++.h>
#define mx 100007
using namespace std;
int main()
{
    int n,d,i,j;
    long long m,arr[mx];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);
        sort(arr,arr+n);
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        scanf("%lld",&m);
       printf("%d\n",upper_bound(arr,arr+n,m)-arr);

    }

    return 0;
}
