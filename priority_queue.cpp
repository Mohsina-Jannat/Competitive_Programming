#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(5);
    q.push(100);
    q.push(7);
    q.push(9);
    while(!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    return 0;
}
