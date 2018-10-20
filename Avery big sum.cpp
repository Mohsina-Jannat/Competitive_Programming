#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[17],sum=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    printf("%lld\n",sum);
    return 0;
}
