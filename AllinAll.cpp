#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin >> s1 >> s2)
    {
        int e=0,ind=-1;
        bool f;
        int lenprnt=s2.size();
        for(int i=0;i<lenprnt;i++)
        {
            if(s2[i]==s1[e])
            {
                //if(e==0) ind=i;
                e++;
            }
        }
        if(e==s1.size()) f=1;
        else {

            //e=0;
            f=0;
        }
        if(f==1) printf("Yes\n");
        else printf("No\n");

    }
    return 0;
}
