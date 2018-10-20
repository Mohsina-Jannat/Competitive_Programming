#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long fibo[50]= {1,2};
    for(int i=2; i<50; i++)
        fibo[i]=fibo[i-1]+fibo[i-2];
    int t;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
        int n;
        long long ret=1;
        scanf("%d",&n);
        while(n--)
        {
            int x;
            int cnt=0;
            scanf("%d",&x);
            for(int i=49; i>=0; i--)
                if(x>=fibo[i])
                {
                    x-=fibo[i];
                    cnt++;
                }
            ret*=cnt;
        }
        printf("Case %d: %lld\n",tc,ret);
    }
    return 0;
}
