#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tc=1;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,sum,i,j,xor_sum=0;
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
        {
            sum=0;
            for(j=0;j<n;j++)
            {
                int a;
                scanf("%d",&a);
                sum+=a;
            }
            xor_sum^=sum;
        }
        if(xor_sum==0) printf("Case %d: Bob\n",tc++);
        else printf("Case %d: Alice\n",tc++);
    }
    return 0;
}
