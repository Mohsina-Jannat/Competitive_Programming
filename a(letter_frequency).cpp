#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,mx;
    scanf("%d",&t);
    getchar();

    char letter[26],str[201];
    int freq[26];

    while(t--)
    {
        gets(str);

        for(int i=0;i<26;i++)
            freq[i]=0;

        for(int i=0;i<26;i++)
            letter[i]='a'+i;




        for(int i=0;str[i]!='\0';i++)
        {
            str[i]=tolower(str[i]);

            for(int j=0;j<26;j++)
                if(str[i]==letter[j])
                freq[j]++;
        }
        mx=0;

        for(int i=0;i<26;i++)
        {
            if(freq[i]>mx)
                mx=freq[i];
        }

        for(int i=0;i<26;i++)
        {
            if(mx==freq[i])
                printf("%c",letter[i]);
        }

        printf("\n");
    }
    return 0;
}
