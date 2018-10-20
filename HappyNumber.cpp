#include<bits/stdc++.h>
using namespace std;
int numSquareSum(int n)
{
    int squareSum = 0;
    while (n)
    {
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    return squareSum;
}

bool isHappynumber(int n)
{
    int slow, fast;

    //    initialize slow and fast by n
    slow = fast = n;
    do
    {
        //    move slow number by one iteration
        slow = numSquareSum(slow);

        //    move fast number by two iteration
        fast = numSquareSum(numSquareSum(fast));

    }
    while (slow != fast);
    return (slow == 1);
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        scanf("%d",&n);
        if(isHappynumber(n))
            printf("Case #%d: %d is a Happy number.\n",cs,n);
        else
            printf("Case #%d: %d is an Unhappy number.\n",cs,n);


    }
    return 0;

}
