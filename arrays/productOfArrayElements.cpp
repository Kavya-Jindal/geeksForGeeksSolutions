#include <bits/stdc++.h>
using namespace std;
long long int product(int ar[], int n, long long int mod)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * ar[i]) % mod;
    }
    return ans;
}
int main()
{
}