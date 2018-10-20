#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    multiset<int> s;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t;
        scanf("%d",&t);
        if(t==1)
        {
            int x;
            scanf("%d",&x);
            st.push(x);
            s.insert(x);
        }else if(t==2){

            int x=st.top();
            st.pop();
            s.erase(s.find(x));
        }else{
                 printf("%d\n",*s.rbegin());
        }

    }
    return 0;
}
