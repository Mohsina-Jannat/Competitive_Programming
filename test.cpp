#include<bits/stdc++.h>
using namespace std;
map <int,long long> dp;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int c ;
    cin >> c ;
    while( c-- )
    {
        dp.clear(); dp[0] = 1 ;
        int d , n ;
        cin >> d >> n ;
        long long ans = 0 , sum = 0 ;
        for(int i=1;i<=n;i++)
        {
            int a ;
            cin >> a ;
            sum=(sum+a)%d;
            ans+=dp[sum];
            dp[sum]++;
        }
        cout << ans << endl ;
    }
    return 0;
}
