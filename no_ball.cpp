#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tc;
    scanf("%d",&t);
    for(tc=1;tc<=t;tc++)
    {
        char grid[5][5];
        int crs=0,leg=0;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                scanf("%c",&grid[i][j]);

            }
        }
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                //scanf("%c",&grid[i][j]);
                if(grid[i][j]=='|') crs=j;
                if(grid[i][j]=='>') leg=j;

            }
        }
        cout << crs << leg << endl;
        if(leg>crs) printf("Case %d: No Ball",tc);
        else if(leg<crs) printf("Case %d: Thik Ball",tc);
    }
    return 0;
}
