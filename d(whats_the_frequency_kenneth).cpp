#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    int cnt[52];

    while(getline(cin,s))
    {
        memset(cnt,0,sizeof(cnt));

        for(int i=0; i<s.size(); i++)

            if(s[i]>='a' && s[i]<='z') cnt[s[i]-'a'+26]++;
            else if(s[i]>='A' && s[i]<='Z') cnt[s[i]-'A']++;


        int x=-1;

        for(int i=0; i<52; i++) x=max(x,cnt[i]);

        for(int i=0; i<52; i++)

            if(cnt[i]==x)
            {
                if(i<26) printf("%c",'A'+i);
                else printf("%c",'a'+i-26);
            }
        printf(" %d\n",x);




    }
    return 0;
}
