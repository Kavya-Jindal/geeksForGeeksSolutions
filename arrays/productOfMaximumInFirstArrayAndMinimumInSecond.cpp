#include <bits/stdc++.h>
using namespace std;
long long find_multiplication(int a[], int b[], int n, int m)
{
    sort(a, a + n);
    sort(b, b + m);
    int maximum = a[n - 1];
    int minimum = b[0];
    int ans = maximum * minimum;
    return ans;
}
int main()
{
}