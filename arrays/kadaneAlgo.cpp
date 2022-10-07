#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ans = max(ans, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return ans;
}
int main()
{
}