#include<bits/stdc++.h>
using namespace std;
int wtCalc(char m)
{
    int n=m;
    int wt=0;
    while(n)
    {
        if(n&1)
            wt+=500;
        else
            wt+=250;
        n >> 1;
    }
    return wt;

}
int main()
{
    char gr[10][20];
    int t,i,j,cs=1;
    string ls,rs;
    scanf("%d",&t);
    while(t--)
    {
        int wl=0,wr=0,downleft,downright;
        ls=rs="";
        for(int i=1; i<8; i++)
        {
            scanf("%s",gr[i]);
        }
        for(int i=1; i<8; i++)
        {
            for(int j=1; j<8; j++)
            {
                if(isupper(gr[i][j]))
                {
                    wl+=wtCalc(gr[i][j]);
                    ls+=gr[i][j];
                }
                else if(gr[i][j]=='_')
                {
                    downleft=i;
                    break;
                }

            }
        }

        for(int i=1; i<8; i++)
        {
            for(int j=10; j<18; j++)
            {
                if(isupper(gr[i][j]))
                {
                    wr+=wtCalc(gr[i][j]);
                    rs+=gr[i][j];
                }
                else if(gr[i][j]=='_')
                {
                    downright=i;
                    break;
                }

            }
        }
        printf("Case %d:\n");
        if(wl<wr && downleft<downright || wl>wr && downleft>downright || wl==wr && downleft==downright)
            printf("The figure is correct.\n");
        else
        {
            for(int i=ls.length(); i<6; i++)
                ls+=".";
            for(int i=rs.length(); i<6; i++)
                rs+=".";
            if(wl<wr)
            {
                puts(".../\\...||........");
                puts("../..\\..||........");
                puts("./....\\.||.../\\...");
                cout<<"/"<<ls<<"\\||../..\\.."<<endl;
                puts("\\______/||./....\\.");
                cout<<"........||/"<<rs<<"\\"<<endl;
                puts("........||\\______/");
            }
            else if(wl>wr)
            {
                puts("........||.../\\...");
                puts("........||../..\\..");
                puts(".../\\...||./....\\.");
                printf("../..\\..||/");
                cout<<rs<<"\\"<<endl;
                puts("./....\\.||\\______/");
                cout<<"/"<<ls<<"\\||........"<<endl;
                puts("\\______/||........");

            }
            else
            {


                puts("........||........");
                puts(".../\\...||.../\\...");
                puts("../..\\..||../..\\..");
                puts("./....\\.||./....\\.");
                // printf(".%s\||/%s\\",Ls,Rs);
                cout<<"/"<<ls<<"\\||/"<<rs<<"\\"<<endl;
                puts("\\______/||\\______/");
                puts("........||........");
            }

        }
    }
    return 0;
}
