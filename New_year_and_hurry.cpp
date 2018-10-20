#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n,k,ans=0;

    cin >> n >> k;

    for(int i=1; i<=n; i++)
    {
        ans+=5*i;
    }

    if(ans+k>240) cout<< n-1;
    else if(ans+k==240 || ans+k<240) cout << n;
    return 0;
}
