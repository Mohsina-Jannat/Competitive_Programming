#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,n_25=0,n_50=0,flag=1;
    cin >> n;


    for(int i=0; i<n; i++)
    {

        cin >> x;

        if(x==25)
        {
            n_25++;

        }
        else if(x==50)
        {
            n_50++;
            n_25--;
            if(n_25<0)
            {
                flag=0;
                break;
            }
        }
        else
        {
            if(n_50>=1 && n_25>=1)
            {

                n_50--;
                n_25--;
            }
            else if(n_25>2)
                {
                    n_25-=3;
                }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");



    return 0;
}
