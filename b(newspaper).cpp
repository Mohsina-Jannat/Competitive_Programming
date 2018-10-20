#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,k,m,l,v;
    double total;
    map<char,int> mymap;
    map<char,int>::iterator it;
    char c;
    string line;

    scanf("%d",&t);

    while(t--)
    {
        total=0;
        scanf("%d",&k);
        cin.ignore();

        for(int i=0;i<k;i++)
        {
            cin >> c >> v;
            mymap[c]=v;
        }
        scanf("%d",&m);
        cin.ignore();

        for(int i=0;i<m;i++)
        {

            getline(cin,line);
            l=line.size();

            for(int j=0;j<l;j++)
            {
                it=mymap.find(line[j]);
                if(it!=mymap.end())
                    total+=it->second;
            }

        }
        total/=100;
        printf("%0.2lf$\n",total);
        mymap.clear();
    }

    return 0;
}
