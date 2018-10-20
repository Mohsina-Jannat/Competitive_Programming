#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n,div,ans;
        scanf("%d",&n);
        if(n==1) printf("1\n");
        else
        {
            div=n/2;
            ans=n+(n/div);
            printf("%d\n",ans);
        }
    }

    return 0;
}
