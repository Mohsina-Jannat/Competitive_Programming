#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    queue<int> q;
    while(scanf("%d",&n),n)
    {
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }
        printf("Discarded cards:");
        while(q.size() > 1)
        {
            printf(" %d",q.front());
            q.pop();
            a=q.front();
            q.pop();
            if(!q.empty())
            {
                printf(",");

            }
            q.push(a);

        }
        printf("\nRemaining card: %d\n",q.front());
        q.pop();
    }
    return 0;
}
