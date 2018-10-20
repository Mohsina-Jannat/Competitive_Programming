#include<bits/stdc++.h>
using namespace std;
vector<int> v(10);
int main()
{
    int arr[17];
    int n,i,s_v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
        scanf("%d",&s_v);
        sort(v.begin(),v.end());
        bool ans=binary_search(v.begin(),v.end(),s_v);
        if(ans==1) cout << "found" << endl;
        else cout << "Not found!!" << endl;

    return 0;
}
