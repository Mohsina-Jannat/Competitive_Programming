#include<bits/stdc++.h>
using namespace std;
struct Disjointset
{
    int n;
    vector<int> parent,rank;
    Disjointset(int _n)/*:n(n),rank(n),parent(n){}*/

        n=int(_n);
        rank=vector<int> (_n);
        parent=vector<int> (_n);
        for(int i=0;i<n;i++) parent[i]=i;


    int rootof(int x) //compression
    {
        if(parent[x]!=x) parent[x]=rootof(parent[x]);
        return parent[x];
    }
//    int rootof(int x) //
//    {
//        int ret=x
//        if(parent[x]!=x) ret=rootof(parent[x]);
//        return ret;
//    }
    bool merge(int x,int y)
    {
        int a=rootof(x);
        int b=rootof(y);
        if(a==b) return false;
        if(rank[a]<rank[b]) parent[a]=b;
        else if(rank[a]>rank[b])  parent[b]=a;
        else
        {
            rank[a]++;
            parent[b]=a;
        }
        return true;

    }
};
struct krushkal
{
    int n;
    Disjointset D;
    vector<pair<int, pair<int, int> > > E;
    krushkal(int n) : n(n), D(n){}
    void Add_Edge(int a,int b,int d)
    {
        E.push_back({d,{a,b}});
    }
    long long int get_kruskal(){
        sort(E.begin(), E.end());
        long long int ans = 0;//
        for(int i = 0; i<E.size(); i++)
        {
            int w = E[i].first, u = E[i].second.first, v = E[i].second.second;
            int x = D.rootof(u), y = D.rootof(v);
            if(x!=y) D.merge(u, v), ans += w;
        }
        return ans;
    }

};
int main()
{
    int n,m;
    cin >> n >> m;
    krushkal K(n);
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        K.Add_Edge(u, v, w);
    }

    cout << K.get_kruskal() << endl;

    return 0;
}
