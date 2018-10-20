#include<bits/stdc++.h>
using namespace std;
int decToBinary(int n)
{
    // array to store binary number
    int binaryNum[1000];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    /*for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];

        cout << endl;
        */
    return i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,cnt,ans;
    cin >> n;
    cnt=decToBinary(n);
    int mx=pow(2,cnt);
    int diff=mx-n;
    ans=n^diff;
    int j=decToBinary(ans);
    cout << ans << endl;



}
