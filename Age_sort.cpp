#include <bits/stdc++.h>


using namespace std;
vector<int > v;

int main()
{
    int t,n,x,i;


    while(1)
    {
        cin >> n;
        if(n==0) break;

        for(int i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        for( i=0; i<n-1; i++)
            cout << v[i] << " ";
        if( i==n-1)
            cout << v[i] << endl;
        v.clear();
    }
    return 0;
}
