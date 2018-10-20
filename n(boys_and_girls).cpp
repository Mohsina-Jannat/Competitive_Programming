#include<bits/stdc++.h>

using namespace std;


int main()
{



   /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/

    int n,m;

    cin >> n>> m;

        if(n==m)
        {
            for(int i=0;i<n;i++)
                printf("BG");
        }
        else if(n>m)
        {
            for(int i=0;i<m;i++)
            {
                printf("BG");
            }
            for(int i=0;i<n-m;i++)
            {
                printf("B");
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                printf("BG");
            }
            for(int i=0;i<m-n;i++)
                printf("G");
        }

        printf("\n");

    return 0;
}
