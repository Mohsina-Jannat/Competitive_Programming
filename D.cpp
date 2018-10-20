#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    scanf("%d",&d);
    string str;
    cin >> str;
    int m=0,w=0,cnt=0,len=str.size();
    for(int i=0; i<len; i++)
    {
        if(str[i]=='M') m++;
        else if(str[i]=='W') w++;

        while(m-w<=d || w-m <=d )
        {
            if(m<=w || w<=m) cnt++;
            break;
        }

    }
    //cout << cnt  << endl;


cout << cnt << endl;
return 0;
}
