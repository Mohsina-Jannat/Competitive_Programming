#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        bool mark=false;
        int n,a,i;
        cin >> n;
        vector<int> v1,v2;
        for(i=0;i<n;i++)
        {
            cin >> a;
            v1.push_back(a);
        }
        for(i=0;i<n;i++)
        {
            cin >> a;
            v2.push_back(a);
        }
        for(i=0;i<n-1;i++)
        {
            if(v1[i]!=v1[i+1])
            {
                mark=true;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(v2[i]<15)
            {
                mark=true;
                break;
            }
        }

        if(mark)
            cout << "No Party" << endl;
        else
            cout << "Party" << endl;
        v1.clear();
        v2.clear();
    }
    return 0;
}
