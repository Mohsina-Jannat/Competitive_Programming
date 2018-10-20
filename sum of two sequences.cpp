#include<bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {

        double a1,d1,k1,a2,d2,k2,s1,s2,s;
        cin >> a1 >> d1 >> k1 >> a2 >> d2 >> k2;
        s1=(k1/2.0)*((2.0*a1)+((k1-1)*d1));
        s2=(k2/2.0)*((2.0*a2)+((k2-1)*d2));
        s=(int)s1+s2;
        printf("Case %d: %lf\n",i,s);
    }
    return 0;
}
