#include<bits/stdc++.h>
using namespace std;
map<int,long long> dp;
int main()
{
    int c;
    cin >> c;
    while(c--)
    {
        int d,n;
        cin >> d >> n;
        long long ans=0,sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            sum=(sum+a)%7;
            ans+=dp[sum];
            dp[sum]++;

        }
        cout << ans << endl;

    }
    return 0;
}
