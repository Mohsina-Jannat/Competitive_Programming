#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    string s;

    while(cin >> n >> s)
    {
        int zero=0;
        int one=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                zero++;
            else one++;
        }

        int minm=min(zero,one);

        int ans=n-(2*minm);

        cout << ans << endl;
    }
    return 0;
}
