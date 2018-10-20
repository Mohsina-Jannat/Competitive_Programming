#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4, 7, 23 ,40,70};
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
