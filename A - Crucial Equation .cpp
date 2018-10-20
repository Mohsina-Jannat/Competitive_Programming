#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main()
{
    int t,tc=1;
    scanf("%d",&t);
    for(tc=1; tc<=t; tc++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int divsr=gcd(a,b);
        if(c%divsr==0)
            printf("Case %d: Yes\n",tc);
        else
            printf("Case %d: No\n",tc);


            }

    return 0;
}
