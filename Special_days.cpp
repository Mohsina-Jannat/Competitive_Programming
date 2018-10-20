#include<bits/stdc++.h>


using namespace std;


int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        string s;
        int d;

        cin >> s >> d;

        if(s=="February")
        {
            if(d<13)
                printf("Case %d: Pohela Falgun\n",i);

            else if(d==13)
            {
                printf("Case %d: Valentine's Day\n",i);
            }
            else if(d >=14 && d<21)
            {
                printf("Case %d: International Mother Language Day\n",i);
            }





            if (d>=21 && d<=28)
               {
                   printf("Case %d: International Women's Day\n",i);
               }

        }
        if(s=="March")
        {
            if(d>=1 && d<8)
            {
                printf("Case %d: International Women's Day\n");
            }
            if(d>=8 && d<21)
            {
                printf("Case %d: International Color Day\n",i);
            }
            else if(d>=21 && d<26)
            {
                printf("Case %d: Bangladesh Independence Day\n",i);
            }
            else if(d>=26 && d<=31)
            {
                printf("Case %d: April Fools Day\n",i);
            }
        }
        if( s=="April")
        {
            if(d>=1 && d<14)
            {
                printf("Case %d: Pohela Boishakh\n",i);
            }
            else if(d>=14 && d<=30)
            {
                printf("Case %d: May Day\n",i);
            }
        }
        if(s=="May")
        {
            if(d>=1 && d<=31)
                printf("Case %d: Father's Day\n",i);
        }

        if(s=="June")
        {
            if(d>=1 && d<19)
                printf("Case %d: Father's Day\n",i);
            else if(d>=19 && d<=30)
             printf("Case %d: Mandela Day\n",i);
        }
        if(s=="July")
        {
            if(d>18)
                printf("Case %d: World Mosquito Day\n",i);
        }
        if(s=="August")
        {
            if(d<20)
                printf("Case %d: World Mosquito Day\n",i);
            else if(d>=20)
                printf("Case %d: Halloween\n",i);
        }
        if(s=="September")
        {
            if(d>=1 && d<=30)
                printf("Case %d: Halloween\n",i);
        }
        if(s=="October")
        {
            if(d<31)
                printf("Case %d: Halloween\n",i);
            else if(d==32)
                printf("Case %d: World Toilet Day\n",i);
        }
        if(s=="November")
        {
            if(d<19)
                printf("Case %d: World Toilet Day\n",i);
            else if(d>=19)
                printf("Case %d: Human Rights Day\n",i);
        }
        if(s=="December")
        {
            if(d<10)
                printf("Case %d: Human Rights Day\n",i);
            else if(d>=10 && d<16)
                printf("Case %d: Victory Day of Bangladesh\n",i);
            else if(d>=16 && d<25)
                printf("Case %d: Christmas Day\n",i);
            else if(d>=25)
                printf("Case %d: Pohela Falgun\n",i);
        }
        if(s=="January")
        {
            if(d>=1 && d<=31)
                printf("Case %d: Pohela Falgun\n",i);
        }
    }
    return 0;
}
