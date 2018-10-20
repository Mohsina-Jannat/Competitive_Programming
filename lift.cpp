#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t,ans;
    cin >> t;

    for(int i=1;i<=t;i++)
    {
        int a,b;

        cin >> a >> b;

        if(a>b)
             ans=(a-b)*4+a*4+19;
        else
            ans=(b-a)*4+a*4+19;

        cout << "Case" << " " << i <<":" << " "<<  ans << endl;
            }
    return 0;
}
