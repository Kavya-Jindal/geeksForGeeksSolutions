#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 0;
        while (j < i)
        {
            cout << "*";
            j++;
        }
        int k = 1;
        while (k < i)
        {
            cout << "*";
            k++;
        }

        int m = 0;
        while (m < n)
        {
            int space2 = m;
            while (space2)
            {
                cout << " ";
                space2--;
            }
            int h = 0;
            while (h < n - m)
            {
                cout << "*";
                h++;
            }
            m++;
        }
        cout << endl;
        i++;
    }
}