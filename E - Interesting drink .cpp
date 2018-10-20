#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,q;
    cin >> n;
    for(i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        cin >> q;
        for(i=0;i<q;i++)
        {
            int x;
            cin >> x;
            int ans=upper_bound(v.begin(),v.end(),x)-v.begin();
            cout << ans << endl;

        }

    return 0;

}
