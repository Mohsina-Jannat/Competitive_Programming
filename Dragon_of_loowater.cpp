#include<bits/stdc++.h>

using namespace std;

int head[20007],knight[20007];

int main()
{
    int n,m,i;

    while(1)
    {
        cin >> n >> m;
        if(n==0 || m==0) break;

        for(i=0; i<n; i++)

            cin >> head[i];


        sort(head,head+n);

        for(i=0; i<m; i++)
            cin >> knight[i];

        sort(knight,knight+m);


        if(n > m)
            cout << "Loowater is doomed!\n";

        else
        {
            int h=0,k=-1,cost=0;

            for(; h<n; ++h)
            {
                ++k;

                while(k<m && knight[k]<head[h])
                    ++k;

                if(k==m) break;

                else cost+=knight[k];
            }


            if(h!=n)
                cout << "Loowater is doomed!\n";
            else
                cout << cost << "\n";
        }

    }
    return 0;
}
