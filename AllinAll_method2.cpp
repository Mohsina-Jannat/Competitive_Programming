#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin >> s1 >> s2)
    {
        bool f;
       if(s2.find(s1)) f=1;
       else f=0;

       if(f==1) printf("Yes\n");
       else printf("No\n");
    }
    return 0;
}
