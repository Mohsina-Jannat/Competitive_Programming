#include<bits/stdc++.h>
using namespace std;
int r,c,len;
int grid[1007][1007];
int visited[1007][1007];
int dist[1007][1007];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
pair<int,int> diameterEnd;
bool inGrid(pair<int,int> &p)
{
    return (p.first>=0 && p.first<r && p.second>=0 && p.second<c);
}

void bfs(pair<int,int>& start)
{
    queue<pair < int,int> > q;
    q.push(start);
    while(!q.empty())
    {
        pair<int,int> curr=q.front(),next;
        q.pop();
        for(int i=0; i<4; i++)
        {
            next.first=curr.first+dx[i];
            next.second=curr.second+dy[i];

            if(inGrid(next))
            {
                if(grid[next.first][next.second]=='.' && !visited[next.first][next.second])
                  {
                      visited[next.first][next.second]=1;
                      dist[next.first][next.second]=dist[curr.first][curr.second]+1;
                      if(dist[next.first][next.second]>len)
                      {
                          len=dist[next.first][next.second];
                          diameterEnd=next;

                      }
                      q.push(next);
                  }
            }

        }


    }
}
int main()
{
    int t;

    scanf("%d",&t);
    while(t--)
    {
         len=0;
        int present=0;
        memset(visited,0,sizeof(visited));
        memset(dist,0,sizeof(dist));
        pair<int,int> st;
        scanf("%d %d",&r,&c);
        for(int i=0; i<r; i++)
        {
            scanf("%s",grid[i]);

        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]=='.')
                {
                    st.first=i;
                    st.second=j;
                    present=1;
                    break;

                }
            }
            if(present)
                break;
        }
        bfs(st);
        memset(visited,0,sizeof(visited));
        dist[diameterEnd.first][diameterEnd.second]=0;
        len=0;
        bfs(diameterEnd);
         printf("Maximum rope length is %d.\n",len);


    }
    return 0;
}
