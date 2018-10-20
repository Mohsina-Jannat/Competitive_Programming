#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tc=1;
    scanf("%d",&t);
    while(t--)
    {
        int r,c,i,j,xor_sum=0;
        scanf("%d %d",&r,&c);
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                int a;
                scanf("%d",&a);
                int pos=(r+c)-(i+j);
                if(pos%2!=0)
                    xor_sum^=a;
            }
        }
        if(xor_sum>0) printf("Case %d: win\n",tc++);
        else printf("Case %d: lose\n",tc++);
    }
    return 0;
}
