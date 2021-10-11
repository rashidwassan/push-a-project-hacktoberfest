#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int  input;
    int  i;
    int  *ar = new int [n-1];
    int nSum = 0, cSum = 0;
    for(i=0; i<n-1; i++)
    {
       cin >> input;
       ar[i] = input;
       cSum+=input;
    }

    for(i=1; i<=n; i++)
    {
        nSum+=i;
    }

    cout << nSum-cSum;

    return 0;
}
