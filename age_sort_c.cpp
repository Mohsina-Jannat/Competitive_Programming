#include<bits/stdc++.h>


using namespace std;

int arr[2000007];


int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        if(n==0) break;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        sort(arr,arr+n);

        for(int i=0; i<n-1; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("%d\n",arr[n-1]);
    }

    return 0;
}
