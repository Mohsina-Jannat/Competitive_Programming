#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,val,i,min_val=1000000007,min_idx=0,cnt=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&val);
        if(val<min_val)
        {
            min_val=val;
            min_idx=i;
            cnt=1;
        }
        else if(val==min_val)
            cnt+=1;

    }
    if(cnt==1)
        printf("%d\n",min_idx+1);
    else
        printf("Still Rozdil\n");


    return 0;
}
