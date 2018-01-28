#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
 
// Function to calculate all common divisors
// of two given numbers
// a, b --> input integer numbers
long long int CommDiv(long long int a,long long int b)
{
    // find gcd of a,b
    long long int n = gcd(a, b);
 
    // Count divisors of n.
    long long int result = 0;
    for (long long int i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i==0)
        {
            // check if divisors are equal
            if (n/i == i)
                result += i;
            else
                result += (i +  n/i);
        }
    }
    return result;
}

long long int solve(long long int n)
{
    long long int i,j;
    long long int divSum = 0;
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            long long int ans = CommDiv(i,j);
            divSum += ans; 
            // cout<<ans<<endl;
        }
    }
    return divSum;
}

int main()
{
    long long int n;
    cin >> n;

    cout<<solve(n)<<endl;
}